#include<stdio.h>
#include<algorithm>
#include<cmath>

int main()
{
int t,n,i;
unsigned long long arr[1000],temp,min_diff;
temp=0;
scanf("%d",&t);
while(t--) {
				scanf("%d",&n);
		for(i=0;i<n;++i)  scanf("%llu",&arr[i]);
		std::sort(arr,arr+n);
min_diff=abs(arr[0]-arr[1]);
for(i=0;i<n;++i) {
		if(i+1<n) {
		temp=abs(arr[i]-arr[i+1]);
				if(temp<min_diff) min_diff=temp;
}
}
printf("%llu\n",min_diff);
			
}
return 0;
}

