
 #include <iostream>
  #include <cstdio>
  #include <cstring>
  #include <cstdlib>
  #include <iomanip>
  using namespace std;
 
  const int maxn = 30010;
  const int currency[12] = {0,5,10,20,50,100,200,500,1000,2000,5000,10000};
  const double eps = 10E-9;
  
  double n;
  long long f[maxn][15];
  
  int main()
  {
      memset(f,0,sizeof(f));
      for (int i=0; i<=11; i++) f[0][i] = 1;
      for (int i=0; i<=maxn; i++)
          for (int j=1; j<=11; j++)
              if (currency[j]<=i) f[i][j] = f[i-currency[j]][j] + f[i][j-1];
              else f[i][j] = f[i][j-1];
      while (true)
     {
          cin >> n;
          if (n==0) break;
          int tmp = (n+eps)*100;
          cout.setf(ios::showpoint);
          cout.setf(ios::fixed,ios::floatfield);
          cout << setw(6) << setprecision(2) << n << setw(17) << f[tmp][11] << endl;
      }
      return 0;
  }
