#include<stdio.h>
 
int map[6][6]={{0,0,0,0,0,0},
               {0,0,1,1,0,1},
               {0,1,0,1,0,1},
               {0,1,1,0,1,1},
               {0,0,0,1,0,1},
               {0,1,1,1,1,0}};
int ans[10];
 
void visit(int,int);
int main()
{
    visit(1,1);
 
    return 0;
}
 
void visit(int n, int len)
{
    int i;
    ans[1]=1;
    if(len>=9){
        for(i=1;i<=9;i++)
            printf("%d",ans[i]);
        printf("\n");
 
        return;
    }
     
    else{
        for(i=1;i<=5;i++){
            if(map[n][i]==1){
                ans[len+1]=i;
                map[n][i]=map[i][n]=0;
                visit(i,len+1);
                map[n][i]=map[i][n]=1;
 
            }
        }
    }
}
