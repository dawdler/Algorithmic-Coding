#include<cstdio>
#include<cmath>

#define MAX 10000001
int sieve[MAX]={0};
int primecol[MAX];
void gensieve()
{
long i,j;
sieve[0]=sieve[1]=1;
for(i=4;i<MAX;i+=2) { sieve[i]+=1;}
for(i=2;i<=sqrt(MAX);++i) {
		if(!sieve[i]){
                                for(j=i+i;j<=MAX;j+=i)
                                sieve[j]=sieve[j]+1;
}
}
j=-1;
for(i=2;i<MAX;++i) {
		if(sieve[i]) sieve[i]+=2;
        if(!sieve[i]) { sieve[i]=2;
                primecol[++j]=i;    }
        }
//cout<<sieve[8]<<endl;
}




int main()
{
int a,b,n;
int count=0;
gensieve();
scanf("%d%d%d",&a,&b,&n);
for(int i=a;i<=b;++i) {
		if(sieve[i]==n) ++count;

	}

printf("%d\n",count);
return 0;
}

	
