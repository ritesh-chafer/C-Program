#include<stdio.h>

int main()
{
  int a[20],i,n,low,high,item,loc,mid;

  printf("Enter the size of array:");
  scanf("%d",&n);

  printf("Enter the element of array:\n");

  for( i = 0 ; i < n ; i++ )

       scanf("%d",&a[i]);

  printf("Enter the element u want to search:");
  scanf("%d",&item);
  
  low = 0;
  high = n;
  mid = ( low + high ) / 2;

  while( low <= high && a[mid] != item){

       if( item < a[mid] )
             high = mid - 1;
       else 
             low = mid + 1;

       mid = ( low + high ) / 2;  
  }

  if( a[mid] == item )
          loc = mid;
  else
          loc = 0;

  printf("Elment found at location %d",loc);

  return 0;       

}