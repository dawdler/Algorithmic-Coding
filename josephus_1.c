    #include <stdio.h>
   long josephus(long  n,long k)
    {
    if (n == 1)
    return 1;
    else
    return (josephus(n - 1, k) + k-1) % n + 1;
    }
    
    int  main()
    {
    long N,W,D ;
	while(1) {
			scanf("%ld %ld",&N,&D);	
			if(N==0 && D==0) break;
				
    W=josephus(N,D);
	printf("%ld %ld %ld\n",N,D,W);

	
    } 
	


return 0;
}


