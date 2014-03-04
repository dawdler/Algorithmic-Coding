//#define <bool.h>
#include<stdio.h>
#define FALSE 1
#define TRUE 0
int arr[1000];
void markmultiples(int a,int n) {
	int i=2,num;
while((num=i*a)<=n) {
			arr[num-1]=FALSE;
++i;
}
}

void sieve(int n) {
	//	if(n>=2) bool arr[n];
int i;		
//memset(arr,0,sizeof(arr)); 
for(i=0;i<n;++i) arr[i]=TRUE;
for(i=1;i<n;++i) {
	if(arr[i]==0) {
		//printf("%d",i+1);
		markmultiples(i+1,n);
		}
	}
	//}
}


int main()
{
int t,i;
int n,j;
int count=0;
scanf("%d",&t);
for(i=0;i<t;++i)  {
		scanf("%d",&n);
		sieve(n);

  for(j=0;j<n;++j) {
		if(arr[i]==TRUE) ++count;
}
printf("%d",count);
}
return 0;
}

		
