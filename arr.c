#include<stdio.h>
int main() {
	int arr[3][3]={
			{2,4,6},
			{9,1,10},
			{16,64,5},
};
printf("%d\n",*arr[1]);
printf("%d\n",*(arr[1]+1));
printf("%d\n",arr[1][2]);
printf("%d\n",*(arr[1]+1)|arr[1][2]);
printf("%d",1|10);
return 1;
}

