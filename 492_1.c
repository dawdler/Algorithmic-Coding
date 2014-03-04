#include<cstdio>
#include<cctype>
int isvowel(char ch)
{
   int flag =0;
   if(ch=='a'|| ch=='A'||ch=='e'|| ch=='E'||ch=='i'|| ch=='I'||ch=='u'|| ch=='U'||ch=='o'|| ch=='O')
       flag = 1;
   return flag;
}
int main()
{
    char ch,save;
    int n;
    //freopen ("in.txt","r",stdin);
    while(1)
    {
        n=scanf("%c",&ch);
        if(n!=1)
            break;
        if(isvowel(ch))
        {
            printf("%c",ch);
            while(1){
                scanf("%c",&ch);
                if(!isalpha(ch))
                    break;
                printf("%c",ch);
            }            printf("ay%c",ch);
        }
        else if(isalpha(ch))
        {
              save=ch;
              while(1)
              {
                scanf("%c",&ch);
                if(!isalpha(ch))
                    break;
                printf("%c",ch);
              }
              printf("%cay%c",save,ch);
        }
        else
          printf("%c",ch);
    }
    return 0;
} 
