#include<stdio.h>

int main()
{
 int a[20][20],b[20][20],i,j,m,n,ad[i][j];

 printf("enter the no of rows and column:");
 scanf("%d %d",&m,&n);

 printf("enter the no. of 1st matrix:\n");

 for(i=0;i<m;i++){

    for(j=0;j<n;j++){

        printf("enter element a%d%d:",i+1,j+1);       
        scanf("%d ",&a[i][j]);
    }
 }

 printf("enter the no. of 2nd matrix:\n");
 
 for(i=0;i<m;i++){
   
    for(j=0;j<n;j++){

       printf("enter element b%d%d:",i+1,j+1);  
       scanf("%d ",&b[i][j]);

    }

 }

 for(i=0;i<m;i++){
 
    for(j=0;j<n;j++){

       ad[i][j]=a[i][j]+b[i][j];
    }
 }


 for(i=0;i<m;i++){

    for(j=0;j<n;j++){

       printf("%d  ",ad[i][j] );
    }
    printf("\n");
 }

 return 0;
}