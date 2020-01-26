#include <stdio.h>
unsigned int fact(unsigned int n)
{
    if(n<=1)
        return 1;
    else
        return(n*fact(n-1));
}
int main(void) {
	// your code goes here
	int t,n,k;
	long f;
	scanf("%d",&t);
	for(k=0;k<t;k++)
	{   
	   scanf("%d",&n);
	   printf(fact(n));
	   printf("\n");
	}
	return 0;
}


