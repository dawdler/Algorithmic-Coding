#include<stdio.h>
#include<string.h>

int n[110],num,ans[110],final;
bool find,visit[110];
char cha[5]={'0','+','-','*','/'};

void dfs(long long int now,int p)
{
    if(find)
        return;
    if(p>0 && (now>=32000 || now<=(-32000)))
        return;

    if(p==num-1)
    {
        if(find)
            return;
        else if(now==final)
        {
            printf("%d",n[0]);
            for(int i=1;i<num;i++)
                printf("%c%d",cha[ans[i]],n[i]);
            printf("=%d\n",final);
            find=true;
            return;//重要!!!!剛剛忘了! 
        }
        else
            return;
    }
    else
    {
        ans[p+1]=1;//+
        dfs(now+n[p+1],p+1);
        ans[p+1]=2;//-
        dfs(now-n[p+1],p+1);
        ans[p+1]=3;//*
        dfs(now*n[p+1],p+1);   
        ans[p+1]=4;// /
        dfs(now/n[p+1],p+1);                   
    }
}

int main()
{
    int c;
    scanf("%d",&c);
    while(c--)
    {   
        scanf("%d",&num);
        for(int i=0;i<num;i++)
            scanf("%d",&n[i]);
        scanf("%d",&final);

        memset(visit,false,sizeof(visit));
        find=false;
        
        dfs(n[0],0);
        
        if(!find)  
            printf("NO EXPRESSION\n");
    }
    return 0;
}
