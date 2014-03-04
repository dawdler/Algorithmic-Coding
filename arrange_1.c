#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

int amplifier[1111111],amplifiers;

int compare_ints(const void *ptr1,const void *ptr2) {
		return *((int*)ptr1)-*((int*)ptr2);
}

int main()
{
int cases;
int numbers,number;

int ones,twos,threes;
int reverse23;
scanf("%d",&cases);
while(cases--) {
	scanf("%d",&numbers);
	ones=twos=threes=0;
	amplifiers=0;
while(numbers--) {
		scanf("%d",&number);
	switch(number) {
		case 1:ones++;break;
		case 2:assert(!twos);twos++;break;
		case 3:assert(!threes);threes++;break;
		defalult:amplifier[amplifiers++]=number;break;
}
}
qsort(amplifier,amplifiers,sizeof(int),compare_ints);
reverse23=!amplifiers;
while(ones--) printf("1 ");
while(amplifiers) printf("%d ",amplifier[--amplifiers]);
if(reverse23) {
	if(twos) printf("2 ");
	if(threes) printf("3 ");
	}
else {
	if(threes) printf("3 ");
	if(twos) printf("2 ");
}
printf("\n");
}
return 0;
}



	
