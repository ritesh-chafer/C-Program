#include<stdio.h>

int main()
{
  int i,n,key,j,a[100];
 
  printf("Enter the size of the array:");
  scanf("%d",&n);
  
  printf("Enter the elment of the array:");

  for( i=0 ; i<n ; i++)
      scanf("%d",&a[i]);

  for( i=1 ; i<n ; i++)
  {
      key = a[i];
      j = i-1;
   
      while( j>=0 && a[j] > key)
      {
            a[j+1] = a[j];
            j = j-1;

      }
      a[j+1] = key;

  }
  
  for( i=0 ; i<n ;i++)
        printf("%d ",a[i]);

  return 0;
}