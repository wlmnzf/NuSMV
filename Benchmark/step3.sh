
#!/bin/bash
nusmvswp='../NuSMV-2.6.0/NuSMV/build/bin/NuSMV'


for file in ./*.smv ; do
   
   fname=$(basename $file)
   if [ "$fname" == "mapk.smv" ]
      then
         echo "skipping" $fname
      else
         fnameout=${fname%.*}.out
         echo $fnameout
         $nusmvswp -dcx -a $fnameout $fname
         
   fi

done
