#include<stdio.h>
int fact(int);

int main()
{
  int n;

  printf("Enter any positive no. to find factorial:");
  scanf("%d",&n);

  printf("The factorial of %d is %d",n,fact(n));
  
  return 0;

}

int fact(int n){

  if( n == 0 )
       return 1;

  else
       return ( n * fact(n - 1));


}
