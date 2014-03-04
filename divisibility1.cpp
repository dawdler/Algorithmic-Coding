#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int list[10005],N,K,stop,re[10005][105];
void brute(int level,int now);

main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
   
    int T,t,n;
    scanf(" %d",&T);
    for(t=0;t<T;t++){
        scanf(" %d %d",&N,&K);
        for(n=0;n<N;n++)
            scanf(" %d",&list[n]);
        stop=0;
        memset(re,0,sizeof(re));
        brute(1,list[0]);
        if(stop==0)    printf("Not divisible\n");
        else    printf("Divisible\n");
    }
}
void brute(int level,int now)
{
    if(re[level][now%K]!=0)    return;  //不做memorization會TLE!!
    re[level][now%K]=1;
    if(level==N){
        if(now%K==0)
            stop=1;
        return;
    }
    brute(level+1,now+list[level]);
    if(stop==1)    return;
    brute(level+1,now-list[level]);
    if(stop==1)    return;
}
