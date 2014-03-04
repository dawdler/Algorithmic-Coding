#include<stdio.h>
double fact(double num)
{
     double fact=1,i;
     for(i=num;i>1;i--)
     fact=i*fact;
   //  printf("%ld",fact);
     return fact;
}
int main()
{
    int t,i,num,div;
    double n,k,res,f;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
                    scanf("%lld%lld",&n,&k);
                    f=(fact(n+k-1));
                    div=f/1000007;
                   num=(int)(f-(1000007*div));
                   res=num/(fact(n)*fact(k-1));
                   
                    printf("%.0lld\n",res);
    }
    return 0;
}
