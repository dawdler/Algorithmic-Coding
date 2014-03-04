#include<iostream>
#include<cstdio>
using namespace std;

int num[13];
int used[13];
int n;
int backtrack(int total,int first) { 
int i,j,done;
done=0;
for(i=first;i<n;++i) { 
if(used[i]) continue;
if(total==num[i])  { 
for(j=0;j<i;++j) { 
 		if(used[j])  { 
		printf("%d+",num[j]);
	}	
}
printf("%d\n",num[i]);	
while(i<n && num[i+1]==num[i]) i++;
done=1;

} else if (total>num[i]) { 
	used[i]=1;
	done+=backtrack(total-num[i],i+1);
	used[i]=0;
	while(i<n && num[i+1]==num[i]) i++;
	
	}  
 

}
return done; 

}


int main()
{
while(1) {
	int t;
	cin>>t>>n;
	if(n==0) break;
	for(int i=0;i<n;++i) { cin>>num[i]; used[i]=0; } 
		printf("Sums of %d:\n",t);
		
if( !backtrack(t,0)) 
	printf("NONE\n");
	}
return 0;
}

