//postupnost je ulozena v poli A na poziciach 1 az n
for(int i=1; i<=n-1; i++)
    for(int j=i; j<=n-1; j++)
        if(A[j]>A[j+1]) swap(A[j],A[j+1]);
