#include<stdio.h>
void find();
int list[100],N;
int main()
{
int t;
int i;
scanf("%d",&t);
	while(t--) {
			scanf("%d",&N);
			for(i=0;i<N;++i) {
					scanf("%d",&list[i]);
			}
			find();
}
return 0;
}

void find() {
		int maj_index=0,count=1;
		int i;
for(i=1;i<N;++i) {
		if(list[maj_index]==list[i]) {
			count++;
			}
		else count--;
		if(count==0) {
			maj_index=i;
			count=1;
			}
}
printf("%d %d\n",list[maj_index],count);
}


			
