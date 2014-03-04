#include<iostream>
#include<cstdio>

using namespace std;

#define MAX 25

int top=0;
int optimum_top;
int optimum_cd[MAX],cd[MAX],track[MAX];
int remaining=0;
int n,minimum,t,cd_length;
void max_length(int minutes,int index) { 
	
	if(index==n || minutes-track[index]<0) {  
	if(minutes<minimum){ 
	minimum=minutes;
	optimum_top=top;
	for(int i=0;i<top;++i)
	optimum_cd[i]=cd[i];
	} 	
	
	}
	else { 
	cd[top++]=track[index];
	for(int i=index+1;i<=n;i++)
	max_length(minutes-track[index],i);
	top--;
	}
	}

int main()
{

int sum=0;
while(scanf("%d",&cd_length)!=EOF) {

cin>>n;
for(int i=0;i<n;++i) cin>>track[i];	
minimum=cd_length;
//for(int i=0;i<n;++i) cout<<track[i]<<" ";
for(int i=0;i<n;++i) { 
	max_length(n,i);
	}
printf("optimum top:%d\n",optimum_top);
for(int i=0;i<optimum_top;++i)  { 
	printf("%d ",optimum_cd[i]);
	sum+=optimum_cd[i];
	}
printf("sum:%d\n",sum);


}
 }
