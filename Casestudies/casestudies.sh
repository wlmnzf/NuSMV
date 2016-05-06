#!/bin/bash

nusmvswp='../NuSMV-2.6.0/NuSMV/build/bin/NuSMV'

timefile = timeout.txt
if [ ! -e "$timefile" ] ; then
    touch "$timefile"
    echo "file flag system user" > timeout.txt
fi

for file in *.smv;
do
    echo working on $file
    /usr/bin/time -o timeout.txt --append --format "$file 1 %S %U" $nusmvswp -dcx -a print $file
    /usr/bin/time -o timeout.txt --append --format "$file 1 %S %U" $nusmvswp -dcx -a print $file
    /usr/bin/time -o timeout.txt --append --format "$file 1 %S %U" $nusmvswp -dcx -a print $file
    /usr/bin/time -o timeout.txt --append --format "$file 1 %S %U" $nusmvswp -dcx -a print $file
    /usr/bin/time -o timeout.txt --append --format "$file 1 %S %U" $nusmvswp -dcx -a print $file
    /usr/bin/time -o timeout.txt --append --format "$file 1 %S %U" $nusmvswp -dcx -a print $file
    /usr/bin/time -o timeout.txt --append --format "$file 1 %S %U" $nusmvswp -dcx -a print $file
    /usr/bin/time -o timeout.txt --append --format "$file 1 %S %U" $nusmvswp -dcx -a print $file
    /usr/bin/time -o timeout.txt --append --format "$file 1 %S %U" $nusmvswp -dcx -a print $file
    /usr/bin/time -o timeout.txt --append --format "$file 1 %S %U" $nusmvswp -dcx -a print $file
    /usr/bin/time -o timeout.txt --append --format "$file 1 %S %U" $nusmvswp -dcx -a print $file
    /usr/bin/time -o timeout.txt --append --format "$file 1 %S %U" $nusmvswp -dcx -a print $file
    /usr/bin/time -o timeout.txt --append --format "$file 1 %S %U" $nusmvswp -dcx -a print $file
    /usr/bin/time -o timeout.txt --append --format "$file 1 %S %U" $nusmvswp -dcx -a print $file
    /usr/bin/time -o timeout.txt --append --format "$file 1 %S %U" $nusmvswp -dcx -a print $file
    /usr/bin/time -o timeout.txt --append --format "$file 1 %S %U" $nusmvswp -dcx -a print $file
    /usr/bin/time -o timeout.txt --append --format "$file 1 %S %U" $nusmvswp -dcx -a print $file
    /usr/bin/time -o timeout.txt --append --format "$file 1 %S %U" $nusmvswp -dcx -a print $file
    /usr/bin/time -o timeout.txt --append --format "$file 1 %S %U" $nusmvswp -dcx -a print $file
    /usr/bin/time -o timeout.txt --append --format "$file 1 %S %U" $nusmvswp -dcx -a print $file
    
    /usr/bin/time -o timeout.txt --append --format "$file 0 %S %U" $nusmvswp -dcx $file
    /usr/bin/time -o timeout.txt --append --format "$file 0 %S %U" $nusmvswp -dcx $file
    /usr/bin/time -o timeout.txt --append --format "$file 0 %S %U" $nusmvswp -dcx $file
    /usr/bin/time -o timeout.txt --append --format "$file 0 %S %U" $nusmvswp -dcx $file
    /usr/bin/time -o timeout.txt --append --format "$file 0 %S %U" $nusmvswp -dcx $file
    /usr/bin/time -o timeout.txt --append --format "$file 0 %S %U" $nusmvswp -dcx $file
    /usr/bin/time -o timeout.txt --append --format "$file 0 %S %U" $nusmvswp -dcx $file
    /usr/bin/time -o timeout.txt --append --format "$file 0 %S %U" $nusmvswp -dcx $file
    /usr/bin/time -o timeout.txt --append --format "$file 0 %S %U" $nusmvswp -dcx $file
    /usr/bin/time -o timeout.txt --append --format "$file 0 %S %U" $nusmvswp -dcx $file
    /usr/bin/time -o timeout.txt --append --format "$file 0 %S %U" $nusmvswp -dcx $file
    /usr/bin/time -o timeout.txt --append --format "$file 0 %S %U" $nusmvswp -dcx $file
    /usr/bin/time -o timeout.txt --append --format "$file 0 %S %U" $nusmvswp -dcx $file
    /usr/bin/time -o timeout.txt --append --format "$file 0 %S %U" $nusmvswp -dcx $file
    /usr/bin/time -o timeout.txt --append --format "$file 0 %S %U" $nusmvswp -dcx $file
    /usr/bin/time -o timeout.txt --append --format "$file 0 %S %U" $nusmvswp -dcx $file
    /usr/bin/time -o timeout.txt --append --format "$file 0 %S %U" $nusmvswp -dcx $file
    /usr/bin/time -o timeout.txt --append --format "$file 0 %S %U" $nusmvswp -dcx $file
    /usr/bin/time -o timeout.txt --append --format "$file 0 %S %U" $nusmvswp -dcx $file
    /usr/bin/time -o timeout.txt --append --format "$file 0 %S %U" $nusmvswp -dcx $file
    
done;
