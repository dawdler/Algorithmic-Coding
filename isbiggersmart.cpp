#include<iostream>
#include<cstdio>
#include<algorithm>
#define MAX 1002

struct data1 {
		int weight;
		int buddhi;
		int id;
	}data[MAX];


bool my_comp(const data1 &a,const data1 &b) {
		return a.weight<b.weight;
}

int main()
{
int cnt=0;
while(scanf("%d%d",&data[cnt].weight,&data[cnt].buddhi)==2)
cnt++;

for(int i=0;i<cnt;++i) data[i].id=i;


