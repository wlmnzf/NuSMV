#!/usr/bin/python3

import sys
#import matplotlib.pyplot as pyplot



def read_file(veilchen, subsets):
  
  CTLs = []
  ctlspec = []
  index_of_ctl = 0

  for line in veilchen:
        
    if line.startswith('CTLSPEC:'):
      line = line.replace("CTLSPEC:", "")
      line = line.replace("\n", "")
      ctlspec.append(line.lstrip())
      
    elif (line.startswith('INITACCEPTING_SIZE')):
      line = line.replace("INITACCEPTING_SIZE:", "")
      line = line.replace("\n", "")
      ctlspec.append(int(line.lstrip()))
      
    elif (line.startswith('ANSWER')):
      if (line.find("FALSE") < 0):
	ctlspec.append(index_of_ctl)
	CTLs.append(ctlspec)
      ctlspec = []
      index_of_ctl +=1
	
    else:
      continue

  subset_table = []
  basins = []
  for line in subsets:
    if (line.startswith('CTLSPEC')==0):
      tup = []
      for element in line:
	if element.isdigit():
	  tup.append(int(element))
      subset_table.append(tup)
    else:
      basins.append(line)
      
  return CTLs, subset_table, basins



def make_list(new_file, CTLs, subset_table, basins):
  
  list_output = new_file + ".txt"
  try:
    output = open(list_output, "w")
  except IOError:
    print ("There was an error opening", list_output)
    sys.exit()
  
  total_size = 0
  for ctl in CTLs:
    total_size += ctl[1]
  output.write("Total size is: %s\n" %total_size)
  
  for num, basin in enumerate(basins):
    output.write("\nSubsets of the Basin specified by %s \n" %basin)
    for elem in CTLs:
      if subset_table[elem[2]][num]==1:
	output.write("%s	%s	%s\n" %(elem[0], subset_table[elem[2]], elem[1]))
  
  output.close()



def make_dot(new_file, CTLs, subset_table, basins):
  dot_output = new_file + ".dot"
  try:
    output = open(dot_output, "w")
  except IOError:
    print ("There was an error opening", dot_output)
    sys.exit()
    
  output.write('digraph mygraph{\n label = "\nBasins are: \n')
  for basin in basins:
    output.write('%s' %basin.strip("CTLSPEC"))
  output.write('\n"')
  
  CTLs_inorder = sorted(CTLs, key=lambda CTLs: CTLs[2])
  if len(CTLs)==1:
    output.write('	"SingleNode" [label = "(%s)", xlabel = "size = %s"]\n' %(str(subset_table[CTLs[0][2]])[1:-1], CTLs[0][1]))
  else: 
    for index in range(0, len(CTLs)-1):
      for nextindex in range(index+1, len(CTLs)):
	if all(tuple(i <= j for i, j in zip(subset_table[CTLs[index][2]], subset_table[CTLs[nextindex][2]]))):
	  output.write('	"(%s)" -> "(%s)" [label = " size = %s"]\n' %(str(subset_table[CTLs[index][2]])[1:-1], str(subset_table[CTLs[nextindex][2]])[1:-1], CTLs[index][1]))
	  continue
  output.write("}\n")
  

#def make_plot():



def main(argv=sys.argv):
  
  file_name = argv[1]
  if (file_name.find(".", 1)>0):
    splitted_name = file_name.split(".")
    new_file = splitted_name[0] + "_output"
    subset_file = splitted_name[0] + "_subsets." + splitted_name[1]
  else:
    new_file = file_name[0] + "_output.txt"
    subset_file = file_name + "_subsets.txt"
  
  try:
    veilchen = open(file_name, "r")
  except IOError:
    print ("There was an error opening", file_name)
    sys.exit()
    
  try:  
    subsets = open(subset_file, "r")
  except IOError:
    print ("There was an error opening", subset_file)
    sys.exit()
    
  CTLs, subset_table, basins = read_file(veilchen, subsets)
  make_list(new_file, CTLs, subset_table, basins)
  make_dot(new_file, CTLs, subset_table, basins)
  veilchen.close()
  subsets.close()


if __name__ == "__main__":
    sys.exit(main())