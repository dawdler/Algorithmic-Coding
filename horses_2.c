#include<stdio.h>
int main()
{
int t,n,i;
unsigned long long arr[1000000];
unsigned long long temp=0;
unsigned long long min_diff;
unsigned long long min_element;
int j=0;
scanf("%d",&t);
while(t--) {
		//store=999999;
		scanf("%d",&n);
		for(i=0;i<n;++i)  scanf("%llu",&arr[i]);
			
min_diff = arr[1] - arr[0];
	if(min_diff<0) min_diff=-min_diff;
min_element = arr[0];

//unsigned long long temp;
  for(i = 1; i<n; i++)
  {      
	temp=arr[i]-min_element;
	
	if(temp<0) temp=-temp;
//printf("Temp:%llu\n",temp);
    if(temp <min_diff)                              
      min_diff = temp;
    if(arr[i] >min_element)
         min_element = arr[i];
//printf("min_element:%llu\n",min_element);                    
  }
   printf("%llu\n",min_diff);
}
return 0;
}

