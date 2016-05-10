#!/bin/bash


filename=$1
nusmvswp='NuSMV-2.6.0/NuSMV/build/bin/NuSMV'
outputfile=$filename
echo $outputfile
outputfile="${outputfile%.smv}.txt"
echo $outputfile


python subsets_of_basins.py $filename
$nusmvswp -a $outputfile "${filename%.smv}_prepared.smv"
python basins_visualized.py $outputfile
dot -Tpdf "${outputfile%.txt}_output.dot" -o "${outputfile%.txt}.pdf"

