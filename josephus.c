    #include <stdio.h>
    int josephus(int n, int k)
    {
    if (n == 1)
    return 1;
    else
    return (josephus(n - 1, k) + k-1) % n + 1;
    }
    // Driver Program to test above function
    int main()
    {
    int N,result ;
	while(scanf("%d",&N)) {
			if(N==0) return 0;
		int m=1;
while(1) {
	
    result=josephus(N+N, m);
	if(result==1) break;
   		m++;
    } 
	printf("%d\n",m);

}
return 0;
}


