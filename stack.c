#include<stdio.h>
#include<stdlib.h>
#define MAXSTK 5

void push(void);
void pop(void);
void peep(void);

int stack[MAXSTK],top = -1;

int main()
{
  int ch;
 
  while(1){

       printf("\nStack\n1.Push\n2.pop\n3.Display\n4.Exit");
       printf("\nEnter your choice:");
       scanf("%d",&ch);

       switch(ch){

            case 1: push();
                    break;
            
            case 2: pop();
                    break;
             
            case 3: peep();
                    break;
            
            case 4: exit(0);
 
            default : printf("Invalid choice\n"); 

       }
  }

 return 0;

}

void push(void)
{
  int item;

  if(top == MAXSTK - 1)
       
         printf("\nStack Overflow");
  else{

        printf("\nEnter the element to be pushed:");
        scanf("%d",&item);
        
        top = top + 1;
        stack[top] = item;
  }

}

void pop(void){


  int item;
  
  if(top == -1)
        printf("\nStack Underflow");

  else{

       item = stack[top];
       top = top -1;
       printf("\nElement popped: %d",item);
  }
}

void peep(void){

   int i;
   if(top == -1)
        printf("\nStack is empty");

   else{
        
        printf("\nStack contains:\n");
        for(i = top ; i >= 0 ;i--)
               printf("%d\n",stack[i]);   
   }

}