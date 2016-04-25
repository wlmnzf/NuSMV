
#!/bin/bash
nusmvswp='../NuSMV-2.6.0/NuSMV/build/bin/NuSMV'


for file in *.smv ;
do   
   echo working on $file
   fname=$(basename $file)
   fnameout=${fname%.*}.out
   time $nusmvswp -dcx -a $fnameout $file
done
