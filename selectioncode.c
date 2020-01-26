#include <stdio.h>
void selection(long a[], int n)
{
  int i,j,temp;
  for(i=0;i<n;i++)
  {
      for(j=i+1;j<n;j++)
      {
          if(a[i]>a[j])
          {
              temp=a[i];
              a[i]=a[j];
              a[j]=temp;
          }
      }
  }
}
int main(void) {
	// your code goes here
	int n,i,t,k;
	scanf("%d",&t);
	for(k=0;k<t;k++)
	{
	scanf("%d",&n);
	long a[n];   
	for(i=0;i<n;i++)
	   scanf("%ld",&a[i]);
	selection(a,n);
	for(i=0;i<n;i++)
	   printf("%ld\t",a[i]); 
	printf("\n");
	}
	return 0;
}


