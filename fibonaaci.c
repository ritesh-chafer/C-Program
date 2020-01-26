#include<stdio.h>

int fibo(int n){

  if(n == 1)
       return 0;
  if(n == 2)
       return 1;
  else
       return (fibo(n-1) + fibo(n-2));

}

int main()
{
 int i,f,term;
 
 printf("Enter the no. of term:");
 scanf("%d",&term);


 for(i = 1; i <= term; i++){
      
      f = fibo(i);
      printf("%d ",f);
 }
 
 return 0;
}