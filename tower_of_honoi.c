#include<stdio.h>

void toh(int,char,char,char);
int main()
{
   int n;

    printf("Enter no. of disks:");
    scanf("%d",&n);

    toh(n,'A','B','C');
    
    return 0;

}

void toh(int n,char beg,char aux,char end)
{

  if( n == 1){

         printf("disk %d move %c to %c\n",n,beg,end);
         return;
  }
  else{

         toh(n-1,beg,end,aux);
         printf("disk %d move %c to %c\n",n,beg,aux);
         
         toh(n-1,aux,beg,end);
   }


}