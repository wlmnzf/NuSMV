#!/usr/bin/python
# -*- coding: UTF-8 -*-
import re;
import sys;
import os;

class Trace:
    def __init__(self):  
        self.trace_index=0;
        self.trace_state_index=0;
        self.trace_state_dic=[];
        self.filled_trace_state_dic=[];
        self.phase="";

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
white_list=["cache.ExistStateOT","cpu.state","predictor.Predict","cache.ExistStateSC","cache.ExistStateOT","r_time","w_time","cache.evict"]
phase_evict={"attacker.cmd":"flush","victim.cmd":"flush","cpu.state":"evict"}

# white_list=["cpu.state"]

def file2list(fdir):
	files = os.listdir(fdir)
	cnt=0
	multi_counterexample_path_list=[]
	for fpath in files:
		f = open(fdir+'/'+ fpath, 'r')
		multi_counterexample=f.read().replace('\n','').replace('\t','')
		# print(multi_counterexample)
		pattern = re.compile(r'-> State: ([0-9]*).([0-9]*) <-([\s|_|.|=|0-9A-Za-z]*)')
		results=re.findall(pattern,multi_counterexample)
		# print(results)

		path = re.compile(r'([\S]*) = ([\S]*)')


		index_last=1
		index_current=1;
		counterexample=[]

		for i in range(len(results)):
			# print(results[i])
			trace = Trace()
			index_current= int(results[i][0])
			trace.trace_index =cnt
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
				cnt=cnt+1
				trace.trace_index=cnt

			counterexample.append(trace)

		multi_counterexample_path_list.append(counterexample);
		cnt=cnt+1

	multi_counterexample_path_list.sort(key=len)
	return multi_counterexample_path_list

def fill_states(multi_counterexample_path_list):
	# print(multi_counterexample_path_list)
	phase_evict_index=-1;
	for i in range(len(multi_counterexample_path_list)):
		# every counterexample
		items=[]
		phase_evict_index=-1;

		for j in range(len(multi_counterexample_path_list[i])):
			if(j==0):
				items=list(multi_counterexample_path_list[i][j].trace_state_dic.keys());
				multi_counterexample_path_list[i][j].filled_trace_state_dic=multi_counterexample_path_list[i][j].trace_state_dic.copy()
				for x in range(len(items)):
					if(items[x] not in white_list and items[x] not in black_list):   #除了黑名单和白名单外的item都删除掉;
						multi_counterexample_path_list[i][j].filled_trace_state_dic.pop(items[x])
				items=list(multi_counterexample_path_list[i][j].filled_trace_state_dic.keys());

			else:
				# items=list(multi_counterexample_path_list[i][j-1].filled_trace_state_dic.keys());
				multi_counterexample_path_list[i][j].filled_trace_state_dic={};#multi_counterexample_path_list[i][j].trace_state_dic.copy();
				for k in range(len(items)):
					if(not ( items[k] in multi_counterexample_path_list[i][j].trace_state_dic)):  #item不存在本trace中则从上一个trace中取值
						multi_counterexample_path_list[i][j].filled_trace_state_dic[items[k]]=multi_counterexample_path_list[i][j-1].filled_trace_state_dic[items[k]]
					else:																		  #否则从本trace中取值
						multi_counterexample_path_list[i][j].filled_trace_state_dic[items[k]]=multi_counterexample_path_list[i][j].trace_state_dic[items[k]]

				phase_items=list(phase_evict.keys())
				for key in phase_items:
					if(multi_counterexample_path_list[i][j].filled_trace_state_dic[key]==phase_evict[key]):
						# print(key)
						# print("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx")
						phase_evict_index=j
		if(phase_evict_index>0):
			multi_counterexample_path_list[i][phase_evict_index].phase="empty"



				# for x in range(len(items)):
				# 	if(items[x] not in white_list and items[x] not in black_list):
				# 		multi_counterexample_path_list[i][j].filled_trace_state_dic.pop(items[x])
				#
				# for k in range(len(items)):
				# 	if(not ( items[k] in multi_counterexample_path_list[i][j].filled_trace_state_dic) and  (items[k] in white_list  or items[k] in black_list or items[k] in black_list)):
				# 		multi_counterexample_path_list[i][j].filled_trace_state_dic[items[k]]=multi_counterexample_path_list[i][j-1].filled_trace_state_dic[items[k]]


	return multi_counterexample_path_list;


def generate_graph(multi_counterexample_path_list,length):
	print(" strict digraph prof {\n")
	print("    node [fontname=\"Arial\"];\n")
	# print("    splines=line;\n")
	print("\"\nempty\n\" [shape=box,width=10]\n")

	if(length>len(multi_counterexample_path_list)):
		length=len(multi_counterexample_path_list)



	for i in range(length):
		# every counterexample
		len_j=len(multi_counterexample_path_list[i])
		phase_id=1
		for j in range(len_j):
			list_str=""
			print("\"");
			if(j==0):
				print("start");
			else:
				items=list(multi_counterexample_path_list[i][j-1].filled_trace_state_dic.items())
				for k in range(len(items)):
					if (items[k][0] in black_list):
						list_str=list_str + ("%s = %s\n" %(items[k][0],items[k][1]))
						continue;
					# print('%d:%d:%s = %s\n' % (phase_id,len_j,items[k][0],items[k][1]))
					print('%d:%d:%s = %s\n' % (i,j-1,items[k][0],items[k][1]))
				# print(multi_counterexample_path_list[i][j-1].trace_index)
				# print(".")
				# print(multi_counterexample_path_list[i][j-1].trace_state_index)

			print("\" -> \"");

			if(multi_counterexample_path_list[i][j-1].phase != ""):
				print(multi_counterexample_path_list[i][j-1].phase);
				print("\"   -> \"");
				phase_id=phase_id+1;



			# if(j==len(multi_counterexample_path_list[i])-1):
			# 	print("Accept:\n")
			items=list(multi_counterexample_path_list[i][j].filled_trace_state_dic.items())
			for k in range(len(items)):
				if (items[k][0] in black_list ):
					continue;
				# print('%d:%d:%s = %s\n' % (phase_id,len_j,items[k][0],items[k][1]))
				print('%d:%d:%s = %s\n' % (i,j,items[k][0],items[k][1]))
			# print(multi_counterexample_path_list[i][j].trace_index)
			# print(".")
			# print(multi_counterexample_path_list[i][j].trace_state_index)

			print("\"");
			print("[ label=\"%s\" ]" % list_str)


			if(j==len_j-1):
				print("\"");
				for k in range(len(items)):
					if (items[k][0] in black_list ):
						continue;
					# print('%d:%d:%s = %s\n' % (phase_id,len_j,items[k][0],items[k][1]))
					print('%d:%d:%s = %s\n' % (i,j,items[k][0],items[k][1]))

				print("\" -> \"Danger\"");






	print("}")


	





def main(argv):
	multi_counterexample_path_list=file2list('ce')
	multi_counterexample_path_list=fill_states(multi_counterexample_path_list);
	generate_graph(multi_counterexample_path_list,1000)

	# for i in range(len(multi_counterexample_path_list)):
	# 	print(len(multi_counterexample_path_list[i]))
		# for j in range(len(multi_counterexample_path_list[0])):
		# 	print(multi_counterexample_path_list[0][j].filled_trace_state_dic);




if __name__ == "__main__":
   main(sys.argv[1:])