#include <stdio.h>
	#include <string.h>
	 
	char var [2 + 3] [50];
	 
	double adjust (char a)
{
	    if ( a == 'm' ) return 0.001;
    if ( a == 'k' ) return 1000;
    if ( a == 'M' ) return 1000000;
    return 1;
}
 
	void upi ()
	{
	    double u = -1, p = -1, i = -1;
	    char c1, c2;
	    char mkM;
 
	    for ( int j = 0; j < 2; j++ ) {
	        if ( var [j] [0] == 'P' ) {
	            sscanf (var [j], "%c%c%lf%c", &c1, &c2, &p, &mkM);
	            p *= adjust (mkM);
	        }
	 
        if ( var [j] [0] == 'U' ) {
         sscanf (var [j], "%c%c%lf%c", &c1, &c2, &u, &mkM);
	            u *= adjust (mkM);
	        }
 
	        if ( var [j] [0] == 'I' ) {
	            sscanf (var [j], "%c%c%lf%c", &c1, &c2, &i, &mkM);
            i *= adjust (mkM);
	        }
	    }
 
	    if ( u == 0 ) {
	        p = 0;
	        u = 1;
	    }
	    if ( i == 0 ) {
	        p = 0;
	        i = 1;
	    }
	 
	    if ( i == -1 ) printf ("I=%.2lfA\n", p / u);
	    if ( u == -1 ) printf ("U=%.2lfV\n", p / i);
	    if ( p == -1 ) printf ("P=%.2lfW\n", u * i);
	}
	 
	int main ()
	{
	    int testCase;
	    scanf ("%d", &testCase);
	    getchar ();
	    //bool blank = false;
	    int cases = 0;
	 
	    while ( testCase-- ) {
	 
	        char input [5000];
	        gets (input);
	 
	        //int len = strlen (input);
	        char *p;
	        int index = 0;
	 
	        p = strtok (input, " AVW");
	 
	        while ( p != NULL ) {
	            if ( strchr (p, '=') )
	                strcpy (var [index++], p);
	            //printf ("%s\n", p);
	            p = strtok (NULL, " ");
	 
	        }
	        printf ("Problem #%d\n", ++cases);
	        upi ();
	        printf ("\n");
	    }
	 
	    return 0;
	}


