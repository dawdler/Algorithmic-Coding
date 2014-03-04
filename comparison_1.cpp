#include<stdio.h>
#include<string.h>
#define MAXN 100010
int find(char a[],int n)
{
   int cnt[333];
   memset(cnt,0,sizeof(cnt));
   for(int i=0;i<n;i++)
   cnt[a[i]]++;
   for(int i=0;i<333;i++)
   if(cnt[i]>=2) return 1;
   return 0;
}
int main()
{
   char a[MAXN],b[MAXN];
   scanf("%s%s",a,b);
   int p=strlen(a);
   if(p!=strlen(b))
   {
       printf("NO\n");
       return 0;
   }
   else
   {
       if(!strcmp(a,b))
       {
           int c=find(a,p);
           if(c) {printf("YES\n"); return 0;}
           else {printf("NO\n"); return 0;}
       }
       int i=-1,j=-1,k=0;
       for(int m=0;m<p;m++)
       {
           if(a[m]!=b[m])
           {
               k++;
               if(i==-1) i=m;
               else j=m;
           }
       }
       if(k!=2) {printf("NO\n"); return 0;}
       else
       {
           char temp;
           temp=a[i];
           a[i]=a[j];
           a[j]=temp;
           if(!strcmp(a,b)) printf("YES\n");
           else printf("NO\n");
       }
   }
   return 0;
}
