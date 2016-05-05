input=$1
filename="preparedOutput.txt" 
touch $filename
cp $input $filename

sed -i 's/\ //g' $filename
sed -i 's/\bINIT:/;\ /g' $filename
sed -i 's/\bINIT_SIZE:/;\ /g' $filename
sed -i 's/\bACCEPTING:/;\ /g' $filename
sed -i 's/\bACCEPTING_SIZE:/;\ /g' $filename
sed -i 's/\bINITACCEPTING:/;\ /g' $filename
sed -i 's/\bINITACCEPTING_SIZE:/;\ /g' $filename
sed -i 's/\bANSWER:/;\ /g' $filename
sed -i ':a;N;$!ba;s/\n//g' $filename
sed -i 's/CTLSPEC:/\n/g' $filename

sed -i 's/(//g' subset_table.txt
sed -i 's/)//g' subset_table.txt
sed -i 's/,//g' subset_table.txt
