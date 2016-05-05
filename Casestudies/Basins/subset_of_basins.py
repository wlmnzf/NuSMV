#!/usr/bin/python3

import sys
from itertools import product

def read_and_collect(veilchen, output):
  CTLs = []
  for line in veilchen:
    if line.startswith('CTLSPEC'):
      line = line.replace("CTLSPEC", "")
      line = line.replace("\n", "")
      CTLs.append(line)
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
  new_file = argv[2]
  try:
    # open file stream
    veilchen = open(file_name, "r")
    output = open(new_file, "w")
    subsets = open("subset_table.txt", "w")
    CTLs = read_and_collect(veilchen, output)
    powerset, binary_set = make_powerset(CTLs)
    for CTL in powerset:
      output.write("\nCTLSPEC ")
      output.write(CTL)
      output.write("\n")
    for entry in binary_set:
      subsets.write(str(entry))
      subsets.write("\n")
    veilchen.close()
    
  except IOError:
    print ("There was an error opening", file_name)
    sys.exit()


if __name__ == "__main__":
    sys.exit(main())

