#include<stdio.h>
int main()
{
int t,n;
long long S[1000000];
long long temp=0,store;
int i,j=0;
scanf("%d",&t);
while(t--) {
		store=999999;
		scanf("%d",&n);
		for(i=0;i<n;++i)  scanf("%llu",&S[i]);
		
		for(i=0;i<n;++i) {
			for(j=i+1;j<n-1;++j) {
					temp=S[i]-S[j];
			if(temp<0) temp=-temp;
			if(temp<store) store=temp;
		}
	} 

printf("%llu\n",store);
}
return 0;
}


