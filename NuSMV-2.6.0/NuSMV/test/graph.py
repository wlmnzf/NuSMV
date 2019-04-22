#!/usr/bin/python
# -*- coding: UTF-8 -*-
import re;
import sys;

class Trace:
    def __init__(self):  
        self.trace_index=0;
        self.trace_state_index=0;
        self.trace_state_dic=[];
        self.filled_trace_state_dic=[];    

# class MultipleCounterexample:
#     def __init__(self):  
#         self.list = []     


def file2lsit(fpath):
	f = open(fpath, 'r')
	multi_counterexample=f.read().replace('\n','').replace('\t','')
	# print(multi_counterexample)
	pattern = re.compile(r'-> State: ([0-9]*).([0-9]*) <-([\s|.|=|0-9A-Za-z]*)')
	results=re.findall(pattern,multi_counterexample)
	# print(results)

	path = re.compile(r'([\S]*) = ([\S]*)')
	multi_counterexample_path_list=[]

	index_last=1
	index_current=1;
	counterexample=[]
	for i in range(len(results)):
		# print(results[i])
		trace = Trace() 
		index_current=trace.trace_index = int(results[i][0])
		trace.trace_state_index=results[i][1]
		states={}
		tmp_states=re.findall(path,results[i][2])
		# print(tmp_states)
		for j in range(len(tmp_states)):
			states[tmp_states[j][0]]=tmp_states[j][1];
		# print(states)	
		trace.trace_state_dic=states

		if(index_current!=index_last):
			multi_counterexample_path_list.append(counterexample);
			counterexample=[];
			index_last=index_current;
	    
		counterexample.append(trace)

	multi_counterexample_path_list.append(counterexample);
	return multi_counterexample_path_list

def fill_states(multi_counterexample_path_list):
	print("todo")
	





def main(argv):
	multi_counterexample_path_list=file2lsit('counterexample.txt')
	multi_counterexample_path_list=fill_states(multi_counterexample_path_list);



if __name__ == "__main__":
   main(sys.argv[1:])