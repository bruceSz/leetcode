number_arr=$(head -n 1 file.txt|awk '{print NF}')
number_arr=$((number_arr - 1))
arr=()
for i in $(seq 0  $number_arr);do
    arr_str="arr$i=()"
    eval $arr_str
done

index=0
while read line
do
    
    for i in $(seq 0 $number_arr);do
        eval  "arr$i[$index]=\$(echo '$line'|awk '{print \$$((i+1))}')"
    done
    index=$((index + 1))
    
done < file.txt

for i in $(seq 0 $number_arr);do
    eval tmp=\${arr${i}[@]}
    echo $tmp
done

