#include<stdio.h>
#define FALSE 0
#define TRUE 1
int list[100];
//void markmultiples(int,int);
int main()
{
int i,j,count=0;
int n;
int t;
int a,b,c=2,num=0;
for(i=0;i<100;++i) list[i]=TRUE;
scanf("%d",&t);
	for(a=0;a<t;++a) 	  {

				 scanf("%d",&n);

for(i=2;i<n;++i) {
if(list[i]==FALSE) continue;
c=1;	
	b=i;
	//for(j=i;j<n;j=j*j) {
	//	  list[j]=FALSE;  }

while((num=b*c)<=n)   {	
printf("%d:out\n",num);		
list[num]=FALSE;
		++c;
}


}
for(i=1;i<n;++i)  {
			if(list[i]) ++count;
}
printf("%d",count);
}

return 0;
}
 

