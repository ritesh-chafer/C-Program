#include<stdio.h>
#include<conio.h>
int main()
{
	int n,array[n],c=-1,num,min=0,max=n-1,mid=(max+min)/2;
	printf("enter the no. to be entered");
	scanf("%d",&n);
	for (int i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
  }
		for (int i=0;i<n;i++)
	{
		printf("%d",array[i]);

	}
	printf("enter the no. to be searched");
	scanf("%d",&num);
	while(min<max)
	{
		if(array[mid]==num)
{
	c=1;
}
else if(array[mid]>num)
{
	min=0;
	max=mid;
}
else

{
	min=mid;
	max=n;
}
mid=(max+min)/2;
	}
	if (c=1)
	printf("present");
	else
	printf("not present");
	return 0;
	}
