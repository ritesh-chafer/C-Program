#include <stdio.h>
int bsearch(long a[],int l,int u,int s[])
{
    int m;
    while(l<=u)
    {
        m=(l+u)/2;
        if(a[m]==s)
            return m;
        else if(a[m]>s)
            u=m-1;
        else
            l=m+1;
    }
    return -1;
}
int main(void) {
	// your code goes here
	int n,i,t,k,p,q,l,u;
	
	scanf("%d",&t);
	for(k=0;k<t;k++)
	{
	    scanf("%d%d",&n,&q);
	    long a[n];   
	    int s[q];
	    
	    for(i=0;i<n;i++)
	        scanf("%ld",&a[i]);
	    
	   	for(i=0;i<q;i++)
	        scanf("%d",&s[i]);
	    l=0;
	    u=n-1;
	    for(i=0;i<q;i++)
	    {
            p=bsearch(a,l,u,s[i]);
            if(p==-1)
                printf("NO");
	        else
	            printf("YES");
	        printf("\n");
	    }
	}
	return 0;
}



