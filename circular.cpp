#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *next;
};
struct node *FIRST=NULL;
void insert_at_first(int);
void insert_at_end(int);
void insert_afternode(int,int);
void insert_beforenode(int,int);
void del_first();
void del_end();
void del_node(int);
void display();
int main()
{
	int ch,i,n;
	printf("Enter Choice:\n");
	printf("1 Insert at first:\n2 Insert at end:\n3 Insert after node:\n4 Insert before node:\n5 Delete node at first:\n6Delete node at end:\n7 Delete specific node:\n8 Display list:\n9 Exit\n");
	for(;;)
	{
		printf("Enter Choice:\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter the value");
				scanf("%d",&n);
				insert_at_first(n);
				break;
			case 2:
			    printf("Enter the value");
				scanf("%d",&n);
				insert_at_end(n);
				break;
			case 3:
				printf("Enter node value");
				scanf("%d",&n);
				printf("Enter value");
				scanf("%d",&i);
				insert_afternode(n,i);
				break;
			case 4:
				printf("Enter node value");
				scanf("%d",&n);
				printf("Enter value");
				scanf("%d",&i);
				insert_beforenode(n,i);
				break;
	        case 5:
	        	del_first();
	        	break;
	        case 6:
	        	del_end();
	        	break;
	        case 7:
	        	printf("Enter value");
	        	scanf("%d",&n);
	        	del_node(n);
	        	break;
	        case 8:
	        	display();
	        	break;
	        default:
	        	printf("Good bye");
	        	exit(0);
	        }
	    }
	    return 0;
	}
	void insert_at_first(int val)
	{
		struct node *p,*q;
		q=(struct node *)malloc(sizeof(struct node));
		p=(struct node *)malloc(sizeof(struct node));
		if(FIRST=NULL)
		{
			p-> info=val;
			p-> next=p;
			FIRST=p;
		}
		else
		{
			p->info=val;
			p->next=FIRST;
			q=FIRST;
			while(q->next!=FIRST)
			{
				q=q->next;
			}
			q->next=p;
			FIRST=p;
		}
	}
void insert_at_end(int val)
{

	struct node *p,*q;
	p=(struct node *)malloc(sizeof(struct node));
	q=(struct node *)malloc(sizeof(struct node));
	p->info=val;
	q=FIRST;
	if(FIRST==NULL)
	{
		p->next;
		FIRST=p;
	}
	else
	{
		while(q->next!=FIRST)
		{
			q=q->next;
		}
	
	q->next=p;
	p->next=FIRST;
    }
}
void insert_afternode(int n,int val)
{
	struct node *p,*q;
	p=(struct node *)malloc(sizeof(struct node));
	q=(struct node *)malloc(sizeof(struct node));
	p->info=val;
	p->next=NULL;
	q=FIRST;
	while(q->info!=val)
	{
		 q=q->next;
    }
    p->next=q->next;
    q->next=p;
}
void insert_beforenode(int n,int val)
{
		struct node *p,*q,*r;
	p=(struct node *)malloc(sizeof(struct node));
	q=(struct node *)malloc(sizeof(struct node));
	r=(struct node *)malloc(sizeof(struct node));
	p->info=val;
	q->next=NULL;
	q=FIRST;
    r=FIRST;
	while(q->info!=n)
	{
		r=q;
		q=q->next;
	}
	p->next=q;
	r->next=p;
}
void del_first()
{
	struct node *p;
	p=(struct node *)malloc(sizeof(struct node));
	if(FIRST==NULL)
	{
		printf("list empty:");
	}
	else
	{
		p=FIRST;
		while(p->next!=FIRST)
		{
			p=p->next;
		}
		p->next=FIRST->next;
		FIRST=FIRST->next;
	}
}
void del_end()
{
	struct node *p,*q;
	p=(struct node *)malloc(sizeof(struct node));
	q=(struct node *)malloc(sizeof(struct node));
	p=FIRST;
	q=FIRST;
	while(p->next!=FIRST)
	{
		q=p;
		p=p->next;
	}
 q->next=FIRST;
 p->next=NULL;
}
void del_node(int val)
{
	struct node *p,*q;
	p=(struct node *)malloc(sizeof(struct node));
	q=(struct node *)malloc(sizeof(struct node));
     if(FIRST==NULL)
     printf("list empty");
     else
     {
     	p=FIRST;
     	q=FIRST;
     	while(p->info!=val)
     	{
     		q=p;
     		p=p->next;
     	}
     	q->next=p->next;
     	p->next=NULL;
     }
}
void display()
{
	struct node *p,*q;
	p=(struct node *)malloc(sizeof(struct node));
	p=FIRST;
	while(p!=FIRST)
	{
		printf("\n%d ",p->info);
		p=p->next;
	}
	printf("\n");
}

			
			
			
			
		
	

