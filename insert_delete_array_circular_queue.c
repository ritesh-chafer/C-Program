#include<stdio.h>
void push(int []);
int pop(int []);
void display(int []);
int front= -1, rear=-1;
int main()
{
	int queue[100];
	int x, p;
	u:
	display(queue);
	printf("Enter choice : \n 1. Insert\n 2. Delete\n 3. Exit\n ");
	scanf("%d",&x);
	switch(x)
	{
		case 1: push(queue);
				break;
		case 2: p=pop(queue);
				printf("\nPopped value is %d",p);
				break;
		case 3: break;
		default: goto u;
	}
	if(x!=3)
	{
		goto u;
	}
	return 0;	
}
void push(int queue[])
{
	int value;
	if(rear<100-1)
	{
		printf("Enter value to be inserted");
		scanf("%d",&value);
		queue[++rear]=value;
	}
	else if(rear==100-1)
	{
		printf("Overflow");
	}
	if(front==-1)
	{
		front=0;
	}
}
int pop(int queue[])
{
	int value;
	if(front!=-1)
	{
		value=queue[front];
	}
	else
	{
		printf("Underflow");
		return;
	}
	if(front==rear)
	{
		front=-1;
		rear=-1;
	}
	else
	{
		front++;
	}
	return value;
}
void display(int queue[])
{
	int i;
	printf("\nQueue: ");
	if(front!=-1)
	{
		for(i=front; i<=rear; i++)
		{
			printf("%d ", queue[i]);
		}
	}
	else
	{
		printf("<EMPTY>");
	}
	printf("\n");
}
