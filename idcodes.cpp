#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cstring>
using namespace std;
 
char in[1000];
 
int main()
{
    int test, len;
    
        while (1)
    {
        gets(in);
		if(strcmp(in,"#")==0) break;        
len = strlen(in);
        //sort(in,in+len,comp);
 
        
        
            
         if(!next_permutation(in,in+len)){
		puts("No Successor");	
continue; }
	puts(in);
    }
    return 0;
}
