
index=0
target=''
while read line;
do
    index=$((index+1))
    if [ $index -eq 10 ];then
        target=$line
        break
    fi  
done < $1
echo $target
