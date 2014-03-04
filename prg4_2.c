    #include<stdio.h>
    int ms(int n)
    {
    int i,k=1;
    for(i=1;i<n;i++){
    k*=i;
    }
    return k;
    }
    int ncr(int n, int r)
    {
    int i,j,k,l;
    i=ms(n);
    j=ms(r);
    k=ms(n-r);
    l=j*k;
    l=i/l;
    return l;
    }
    int main()
    {
    int h;
	long t;
	int n,k;
		long i;
scanf("%d",&t);
for(i=0;i<t;++i) {
		scanf("%d%d",&n,&k);
    h=ncr(n+k-1,k-1);
    printf("%d\n",h%1000007);
}

    return 0;
    }



