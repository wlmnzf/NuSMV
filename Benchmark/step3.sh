
#!/bin/bash
nusmvswp='../NuSMV-2.6.0/NuSMV/build/bin/NuSMV'

timefile=timeout.txt
if [ ! -e "$timefile" ] ; then
    touch "$timefile"
    echo "n system user" > timeout.txt
fi

secondtime=timeouta.txt
if [ ! -e "$secondtime" ] ; then
    touch "$secondtime"
    echo "n system user" > timeouta.txt
fi

n=5

for file in *.smv ;
do 
   echo working on $file
   fname=$(basename $file)
   fnameout=${fname%.*}.out
   /usr/bin/time -o timeout.txt --append --format "$n %S %U" $nusmvswp -dcx $file
   /usr/bin/time -o timeouta.txt --append --format "$n %S %U" $nusmvswp -dcx -a $fnameout $file
   let n++
done

# ACCEPTING, ACCEPTING_SIZE, INITACCEPTING und INITACCEPTING_SIZE in Dateien speichern zur Weiterverarbeitung

grep -rn --include="*.out" ^"ACCEPTING:" "." | sort >> states_accepting.txt
grep -rn --include="*.out" ^"ACCEPTING_SIZE:" "." | sort >> size_accepting.txt
grep -rn --include="*.out" ^"INITACCEPTING:" "." | sort >> states_init.txt
grep -rn --include="*.out" ^"INITACCEPTING_SIZE:" "." | sort >> size_initaccepting.txt

# CTLSPECS speichern
grep -rn --include="*.out" ^"CTLSPEC:" "." | sort >> ctlspecs.txt