awk '{for (i=1;i<=NF;i++)if($i in arr)arr[$i]+=1;else arr[$i]=1;}END{for(k in arr)printf("%s %s\n",k,arr[k])}' words.txt|sort -k2 -r -n
