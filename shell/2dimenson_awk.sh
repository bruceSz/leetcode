awk 'BEGIN{
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=i;j++)
        {
            tarr[i,j] = i*j;
            print i,"*",j,"=",tarr[i,j];
        }
    }
}'
