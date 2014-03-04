#include<stdio.h>
int main() {

int a[10000];
int t,i,j,tmp,a1,b,swap=0;
int n;
scanf("%d",&t);
for(i=1;i<=t;++i) {
		scanf("%d",&n);
		for(j=0;j<n;++j) {
			scanf("%d",&a[j]);
		}
//insertion sort here

for(a1=2;a1<=n;++a1) {
			b=a1;
			while(b>1) {
				if(a[b]>a[b-1]) {
					tmp=a[b];
					a[b]=a[b-1];
					a[b-1]=tmp;
					++swap;
}
}
}
//printf("LOop over");
printf("%d",swap);
swap=0;	
}	



return 0;
}


	
