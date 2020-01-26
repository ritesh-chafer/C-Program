#include<stdio.h>
int main()
{
	int i,n,p,a[10];
	printf("enter the number of element\n");
	scanf("%d",&n);
	printf("enter the elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("enter the position to be deleted\n");
	scanf("%d",&p);
	for (i=p-1;i<n;i++)
		a[i]=a[i+1];
	for(i=0;i<n-1;i++)
		printf("%d",a[i]);
	return 0;
}
	
