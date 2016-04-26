
#!/bin/bash
nusmvswp='../NuSMV-2.6.0/NuSMV/build/bin/NuSMV'

timefile = timeout.txt
if [ ! -e "$timefile" ] ; then
    touch "$timefile"
    echo "n system user" > timeout.txt
fi

n=5

for file in *.smv ;
do 
   echo working on $file
   fname=$(basename $file)
   fnameout=${fname%.*}.out
   /usr/bin/time -o timeout.txt --append --format "$n %S %U" $nusmvswp -dcx -a $fnameout $file
   let n++
done
