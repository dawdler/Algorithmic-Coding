#include<stdio.h>
void cal(long m,long n)
{
    long k,time=1,max=0,num;
    for(k=m;k<=n;k++)
    {
        num=k;
        while(num^1)
        {
            if(num % 2==0){num/=2;}
            else{num=3*num+1;}
            time++;
        }
        if(max < time) max=time;
        time=1;
    }
    printf("%ld\n",max);
}
int main()
{
    long m,n;
    //freopen("in.txt","r",stdin);
    while(!(scanf("%ld%ld",&m,&n)^2))
    {
        printf("%ld %ld ",m,n);
        if(m<n) cal(m,n);
        else cal(n,m);
    }
    return(0);
}
