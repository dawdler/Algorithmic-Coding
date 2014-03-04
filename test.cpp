#include<iostream>
#include <cstdio>
#include <cmath>
#include <vector>
using namespace std;

#define MAX 1000000

char  prime[MAX];
//int dif[MAX];

void sieve_prime()
{
    int i,j,k,l,m;


    for(i=2;i<=MAX;i++)prime[i]=1;     //assuming all as primes
    k=2;
    for(m=2;m<=sqrt(MAX);m++){
      for(j=k+k;j<=MAX;j=j+k){
        prime[j]=0;
    }
    k++;
    for(;!prime[k];k++);             //looking for nearest green (prime)
    }
}



int main(){
    freopen("in.txt","r",stdin);
    freopen("outMe.txt","w",stdout);
    
    sieve_prime();
    int testCase;
    scanf("%d",&testCase);
    int lowerLimit,upperLimit;
    
    for(int m=1;m<=testCase;m++){
      vector<int>V;
      scanf("%d %d",&lowerLimit,&upperLimit);
      for(int n=lowerLimit;n<=upperLimit;n++){
         if(prime[n])V.push_back(n);
      }
      if(V.size()<2)printf("No jumping champion\n");
      else {
          vector<int>hold;
          int dif[200] = {0};
          for(int i=0;i<V.size()-1;i++){
            dif[V[i+1]-V[i]]++;
          }
          int max = 0,theNumber = 0;
          bool flag = true;
          for(int i=1;i<120;i++){
            if(dif[i]>dif[max])max = i;
          }
          int counter = 0;
          for(int i=1;i<120;i++){
           if(dif[i]==dif[max])counter++;
           if(counter>=2){
             flag = false;
             break;
           }
          }
          if(flag==false)printf("No jumping champion\n");
          else printf("The jumping champion is %d\n",max);
        
      }
     
    }
    
    return 0;
}
