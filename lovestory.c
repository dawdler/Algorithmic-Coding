
#include<stdio.h>
#define MAX 1010

// A utility function to sort an array using Quicksort
void quickSort(long long int *, long long int, long long int);
 
// returns true if there is triplet with sum equal
// to 'sum' present in A[]. Also, prints the triplet
bool find3Numbers(long long int A[], long long int arr_size, long long int sum)
{
    long long int l, r;
 
    /* Sort the elements */
    quickSort(A, 0, arr_size-1);
 
    /* Now fix the first element one by one and find the
       other two elements */
    for (int i = 0; i < arr_size - 2; i++)
    {
 
        // To find the other two elements, start two index variables
        // from two corners of the array and move them toward each
        // other
        l = i + 1; // index of the first element in the remaining elements
        r = arr_size-1; // index of the last element
        while (l < r)
        {
            if( A[i] + A[l] + A[r] == sum)
            {
               // printf("Triplet is %d, %d, %d", A[i], A[l], A[r]);
			printf("YES\n");                
			return true;
            }
            else if (A[i] + A[l] + A[r] < sum)
                l++;
            else // A[i] + A[l] + A[r] > sum
                r--;
        }
    }
 
    // If we reach here, then no triplet was found
   printf("NO\n"); 
   return false;
}
 

/* FOLLOWING 2 FUNCTIONS ARE ONLY FOR SORTING
    PURPOSE */
void exchange(long long int *a, long long int *b)
{
    long long int temp;
    temp = *a;
    *a   = *b;
    *b   = temp;
}
 
int partition(long long int A[], long long int si, long long int ei)
{
    long long int x = A[ei];
    long long int i = (si - 1);
    long long int j;
 
    for (j = si; j <= ei - 1; j++)
    {
        if(A[j] <= x)
        {
            i++;
            exchange(&A[i], &A[j]);
        }
    }
    exchange (&A[i + 1], &A[ei]);
    return (i + 1);
}
 
/* Implementation of Quick Sort
A[] --> Array to be sorted
si  --> Starting index
ei  --> Ending index
*/
void quickSort(long long int A[], long long int si, long long int ei)
{
    long long int pi;    /* Partitioning index */
    if(si < ei)
    {
        pi = partition(A, si, ei);
        quickSort(A, si, pi - 1);
        quickSort(A, pi + 1, ei);
    }
}
 
/* Driver program to test above function */
int main()
{
    /*int A[] = {1, 4, 45, 6, 10, 8};
    int sum = 22;
    int arr_size = sizeof(A)/sizeof(A[0]);
 */
	long long int t,n,sum,i;
long long int A[MAX]={0};
	scanf("%lld",&t);

  while(t--) { 

scanf("%lld",&n);
for(i=0;i<n;++i) scanf("%lld",&A[i]);
scanf("%lld",&sum);

find3Numbers(A, n , sum);
 

}
 
    return 0;
}
