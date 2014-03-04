#include<stdio.h>
 
/* The function assumes that there are at least two
   elements in array.
   The function returns a negative value if the array is
   sorted in decreasing order.
   Returns 0 if elements are equal  */
int minDiff(int arr[], int arr_size)
{
  int min_diff = arr[1] - arr[0];
	if(min_diff<0) min_diff=-min_diff;
  int min_element = arr[0];
  int i;
int temp;
  for(i = 1; i < arr_size; i++)
  {      
	temp=arr[i]-min_element;
	
	if(temp<0) temp=-temp;
printf("Temp:%d\n",temp);
    if(temp <min_diff)                              
      min_diff = temp;
    if(arr[i] >-- min_element)
         min_element = arr[i];                    
  }
  return min_diff;
}   
 
/* Driver program to test above function */
int main()
{
  int arr[] = {88, 7, 86, 8, 6};
  int size = sizeof(arr)/sizeof(arr[0]);
  printf("Maximum difference is %d",  minDiff(arr, size));
  getchar();
  return 0;
}


