#!/usr/bin/python3

import sys
from itertools import product



def read_and_collect(veilchen, output, subsets):
  CTLs = []
  for line in veilchen:
    if line.startswith('CTLSPEC'):
      subsets.write(line)
      line = line.replace("CTLSPEC", "")
      line = line.replace("\n", "")
      CTLs.append(line.lstrip())
    else:
      output.write(line)
  return CTLs



def make_powerset(CTLs):
  binary_set = list(product(range(2), repeat=len(CTLs)))
  powerset = []
  for subset in binary_set:
    new_CTL = ""
    for index in range(0, len(subset)):
      if subset[index] == 1:
	if len(new_CTL) > 1:
	  new_CTL += " & " + " (" + CTLs[index] + ") "
	else:
	  new_CTL += " (" + CTLs[index] + ") "
      else:
	if len(new_CTL) > 0:
	  new_CTL += " & !(" + CTLs[index] + ")"
	else:
	  new_CTL += " !("  + CTLs[index] + ")"
    powerset.append(new_CTL)
  return powerset, binary_set
  
  

def main(argv=sys.argv):
  file_name = argv[1]
  
  if (file_name.find(".", 1)>0):
    splitted_name = file_name.split(".")
    new_file = splitted_name[0] + "_prepared." + splitted_name[1]
    subset_table = splitted_name[0] + "_subsets.txt"
  else:
    new_file = file_name + "_prepared.smv"
    subset_table = file_name + "_subsets.txt"
  
  try:
    # open file stream
    veilchen = open(file_name, "r")
    output = open(new_file, "w")
    subsets = open(subset_table, "w")
    CTLs = read_and_collect(veilchen, output, subsets)
    if len(CTLs)==0:
      print ("There are no CTLs")
      sys.exit()
    elif len(CTLs)==1:
      output.write("\nCTLSPEC !("  + CTLs[0] + ")\n")
      output.write("\nCTLSPEC ("  + CTLs[0] + ")\n")
      subsets.write("\n(0)")
      subsets.write("\n(1)")
    else:
      powerset, binary_set = make_powerset(CTLs)
      for CTL in powerset:
	output.write("\nCTLSPEC ")
	output.write(CTL)
	output.write("\n")
      for entry in binary_set:
	subsets.write(str(entry))
	subsets.write("\n")
    veilchen.close()
    output.close()
    subsets.close()
  except IOError:
    print ("There was an error opening", file_name)
    sys.exit()


if __name__ == "__main__":
    sys.exit(main())

