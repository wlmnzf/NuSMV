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

	# r_time = 0
	# w_time = 0
	# attacker.cmd = branch
	# attacker.rw_addr = SC_addr
	# victim.cmd = nop
	# cache.ExistStateSC = TRUE
	# cache.ExistStateOT = TRUE
	# predictor.Predict = nop
	# cpu.state = normal
	# evict = FALSE
	# cache.evict = FALSE
black_list=["attacker.cmd","victim.cmd"]
white_list=["cache.ExistStateSC","cpu.state","predictor.Predict","cache.ExistStateSC","cache.ExistStateOT","r_time","w_time","cache.evict"]

def file2list(fpath):
	f = open(fpath, 'r')
	multi_counterexample=f.read().replace('\n','').replace('\t','')
	# print(multi_counterexample)
	pattern = re.compile(r'-> State: ([0-9]*).([0-9]*) <-([\s|_|.|=|0-9A-Za-z]*)')
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
	# print(multi_counterexample_path_list)
	for i in range(len(multi_counterexample_path_list)):
		# every counterexample
		items=[]
		for j in range(len(multi_counterexample_path_list[i])):
			if(j==0):
				items=list(multi_counterexample_path_list[i][j].trace_state_dic.keys());
				multi_counterexample_path_list[i][j].filled_trace_state_dic=multi_counterexample_path_list[i][j].trace_state_dic.copy()
				for x in range(len(items)):
					if(items[x] not in white_list and items[x] not in black_list):
						multi_counterexample_path_list[i][j].filled_trace_state_dic.pop(items[x])
				# items=list(multi_counterexample_path_list[i][j].filled_trace_state_dic.keys());

			else:
				# items=list(multi_counterexample_path_list[i][j-1].filled_trace_state_dic.keys());
				multi_counterexample_path_list[i][j].filled_trace_state_dic=multi_counterexample_path_list[i][j].trace_state_dic.copy();
				for k in range(len(items)):
					if(not ( items[k] in multi_counterexample_path_list[i][j].filled_trace_state_dic) and  (items[k] in white_list  or items[k] in black_list)):
						multi_counterexample_path_list[i][j].filled_trace_state_dic[items[k]]=multi_counterexample_path_list[i][j-1].filled_trace_state_dic[items[k]]
					elif ( (items[k] in multi_counterexample_path_list[i][j].filled_trace_state_dic) and (items[k] not in white_list  and items[k] not in black_list) ):
						multi_counterexample_path_list[i][j].filled_trace_state_dic.pop(items[k])

				# for x in range(len(items)):
				# 	if(items[x] not in white_list and items[x] not in black_list):
				# 		multi_counterexample_path_list[i][j].filled_trace_state_dic.pop(items[x])
				#
				# for k in range(len(items)):
				# 	if(not ( items[k] in multi_counterexample_path_list[i][j].filled_trace_state_dic) and  (items[k] in white_list  or items[k] in black_list or items[k] in black_list)):
				# 		multi_counterexample_path_list[i][j].filled_trace_state_dic[items[k]]=multi_counterexample_path_list[i][j-1].filled_trace_state_dic[items[k]]


	return multi_counterexample_path_list;


def generate_graph(multi_counterexample_path_list):
	print(" strict digraph Tree {\n")
	print("    node [fontname=\"Arial\"];\n")

	for i in range(len(multi_counterexample_path_list)):
		# every counterexample
		items=[]
		for j in range(len(multi_counterexample_path_list[i])):
			if(j==0):
				continue;
			print("\"");

			list_str=""
			items=list(multi_counterexample_path_list[i][j-1].filled_trace_state_dic.items())
			for k in range(len(items)):
				if (items[k][0] in black_list):
					list_str=list_str + ("%s = %s\n" %(items[k][0],items[k][1]))
					continue;
				print('%s = %s\n' % (items[k][0],items[k][1]))

			print("\" -> \"");
			# print("op%d:" % i)
			# print(list_str)
			# print("\"\n -> \"");
			if(j==len(multi_counterexample_path_list[i])-1):
				print("Accept:\n")
			items=list(multi_counterexample_path_list[i][j].filled_trace_state_dic.items())
			for k in range(len(items)):
				if (items[k][0] in black_list ):
					continue;
				print('%s = %s\n' % (items[k][0],items[k][1]))

			print("\"");
			print("[ label=\"%s\" ]" % list_str)
			# if(j==len(multi_counterexample_path_list[i])-1):
			# 	items=list(multi_counterexample_path_list[i][j].filled_trace_state_dic.items())
			# 	print("\"Accept:\n")
			# 	for k in range(len(items)):
			# 		if (items[k][0] in black_list):
			# 			continue;
			# 		print('%s = %s\n' % (items[k][0],items[k][1]))
			# 	print("\"")
			# 	print(" [color = red,style=filled]\n")





	print("}")


	





def main(argv):
	multi_counterexample_path_list=file2list('counterexample.txt')
	multi_counterexample_path_list=fill_states(multi_counterexample_path_list);
	generate_graph(multi_counterexample_path_list)

	# for i in range(len(multi_counterexample_path_list)):
	# for j in range(len(multi_counterexample_path_list[0])):
	# 		print(multi_counterexample_path_list[0][j].filled_trace_state_dic);




if __name__ == "__main__":
   main(sys.argv[1:])