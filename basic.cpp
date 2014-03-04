#include<cstdio>
#include<cmath>
#include<iostream>

using namespace std;
#define MAX 1000000
int phi1[MAX]={0};
void phi()
{	for(int j=1;j<MAX;++j) {
	int n=j;     
int result = j;
     int i;
       for(i=2;i*i <= n;i++) 
       { 
         if (n % i == 0) 
         result -= result / i; 
         while (n % i == 0) 
         n /= i; 
       } 
       if (n > 1)
       result -= result / n; 
      phi1[j]=result; 
}
}
int main()
{
    int t,num,i=1;
	phi();
    //scanf("%d",&t);
    while(cin>>num)
    {if(num==0) break;
	cout<<"I m here"<<endl;
       // scanf("%d",&num);
	//for(i=1;i<sqrt(num);++i) {	
		while(1) {
		if(phi1[i]==num){
        printf("%d\n",i); break;} 
++i;    
}
}
    return 0;
}

