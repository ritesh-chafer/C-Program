#include<stdio.h>

void merge_sort(int a[],int low,int high);
void merge(int a[],int low,int mid,int high);

int main()
{
  int i,a[50],n;

  printf("Enter the size of the array:");
  scanf("%d",&n);

  printf("Enter the element of the array:\n");
 
  for( i=0 ; i<n ; i++)
   
         scanf("%d",&a[i]);

  merge_sort(a,0,n);
 
  for( i=0 ; i<n ; i++)
      
        printf("%d ",a[i]); 
   
   getchar();
   getchar();
}

void merge_sort(int a[],int low,int high)
{
  int i,mid;

  mid = (low+high)/2;

  if( low != high ){

      merge_sort(a,low,mid);
      merge_sort(a,mid+1,high);
      merge(a,low,mid,high);
  }
}

void merge(int a[],int low,int mid,int high)
{
  int temp[50],i,j,f,s,t;

  f = low;
  s = mid + 1;
  t = low;

  while( f<=mid && s<=high)
  {
     if(a[f] <= a[s])
     {
         temp[t] = a[f];
         f = f + 1;
     }
     else{
         temp[t] = a[s];
         s = s + 1;  
     }
     t = t + 1;
  }
  
  if( f>mid)
  {
    for( i=s ; i<=high ; i++){
  
           temp[t] = a[i];
           t = t + 1;
    }
  }
  else
  {
    for( i=f ; i<=mid ; i++){
   
           temp[t] = a[i];
           t = t + 1;  
    }
  }
  
 for( j=low ; j<=high ; j++)

       a[j] = temp[j];
}