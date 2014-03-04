
#include <stdio.h>

int main (void)
{
    int turns; 
    int i; 
    long long int ap2d, apn_3d; 
    long long int sum,terms=0; 
    long long int count, a, d; /* hold the number of elements in the ap, the first element and the common difference */
    
    scanf("%d", &turns);
    while (turns--)
    {terms=0;
        scanf("%lld %lld %lld", &ap2d, &apn_3d, &sum); /* get input */
        
        if ( !sum ) /* there are no unique solutions in cases where sum is zero */
        {
            return 1;
        }
        
        count = 2 * sum / (ap2d+apn_3d); /* how many elements are in the ap ? */
	  --count;
	d = (apn_3d-ap2d) / (count-6); /* the common difference */
        a = ap2d - (2 * d); /* the first term */
        
        printf("%lld\n", count);
	terms=a;/* print the number of items in the ap */
        for (i=0; i<count; i++) /* the loop prints the ap */
        {

	  printf("%lld ", terms);terms=terms+d;
        }
        printf("\n");
    } /* repeat */
    return 0;
}