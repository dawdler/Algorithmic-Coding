#include <stdio.h>
 
int josephus(int n, int k)
{
  if (n == 1)
    return 1;
  else
        return (josephus(n - 1, k) + k-1) % n + 1;
}
 
// Driver Program to test above function
int main()
{
    int k = 2;
	int n;
	scanf("%d",&n);
  printf("%d", josephus(n, 2));
  return 0;
}
