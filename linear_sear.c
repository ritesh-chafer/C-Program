#include<stdio.h>

int main()
{
  int a[15],i,n,val,pos=0;

  printf("Enter the size of array:");
  scanf("%d",&n);
  
  printf("Enter the element of array:\n");
  for( i = 0 ; i < n ; i++ ){

     scanf("%d",&a[i]);
  }

  printf("Enter the element u want to search:");
  scanf("%d",&val);

  for( i = 0 ; i < n ; i++ ){
 
      if( a[i] == val )
      {
          pos = i;
          printf("Element found at position %d",pos);
      }
  }
  
  if( pos == 0 )
   
       printf("Element not found");
  
   return 0;
}
