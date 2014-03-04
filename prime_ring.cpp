#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int isprime[]={ 0, 0, 1, 1, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1,
		0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1 };

int current[17],taken[17];

#define valid(num,i) (isprime[current[i-1]+num] && (i!=length-1 || isprime[num+1]))
int length;

int circle_ring(int remaining ) {
if(remaining==length) {
	//print the current array
	for(int i=0;i<length;++i) {
	printf("%d",(current[i])),printf(((i != length-1) ? " ": "\n"));

}
}
else 
	for(int i=2+((remaining+1) & 1);i<=length;i+=2) {
	if(!taken[i] && valid(i,remaining)) {
		taken[i]=1;
		current[remaining]=i;
		circle_ring(remaining+1);
		taken[i]=0;
}
}
}



int main()
{
memset(current,0,sizeof(current));
memset(taken,0,sizeof(taken));

int count=0;
//int length;
while(scanf("%d",&length) !=EOF) {
	current[0]=1;
	taken[0]=1;
//memset(current,0,sizeof(current));
//memset(taken,0,sizeof(taken));
	if(count) printf("\n");
	printf("Case %d:\n",++count);
	
	
circle_ring(1);
}
return 0;
}


	
