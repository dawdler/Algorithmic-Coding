
 #include <iostream>
  #include <cstdio>
  #include <cstring>
  #include <cstdlib>
  #include <iomanip>
  using namespace std;
 
  const int maxn = 30010;
  const int currency[5] ={1,5,10,25,50};
  const double eps = 10E-9;
  
  double n;
  long long f[maxn][15];
  
  int main()
  {
      memset(f,0,sizeof(f));
      for (int i=0; i<=4; i++) f[0][i] = 1;
      for (int i=0; i<=maxn; i++)
          for (int j=0; j<=4; j++)
              if (currency[j]<=i) f[i][j] = f[i-currency[j]][j] + f[i][j-1];
              else f[i][j] = f[i][j-1];
      while (true)
     {
          cin >> n;
          //if (n==0) break;
	if(f[(long long )n][5]==1) 
	cout<<"There is only 1 way to produce "<<n<<" cents change."<<endl;
else 
    	cout<<"There are "<<f[(long long )n][4]<<" ways to produce "<<n<<" cents change."<<endl; 
     }
      return 0;
  }
