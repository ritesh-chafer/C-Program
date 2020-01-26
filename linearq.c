#include<stdio.h>
#include<stdlib.h>
#define max 5

int q[max],front=-1,rear=-1;

void insert();
void delete();
void display();

int main()
{
  int ch;
  
  while(2){

  printf("1.Insert\n2.Delete\n3.Display\n4.Exit");
  printf("\nEnter your choice:");
  scanf("%d",&ch);

     switch(ch){

         case 1: insert();
                 break;
    
         case 2: delete();
                 break;
     
         case 3: display();
                 break;
         
         case 4: exit(0);

         default: printf("Invalid choice");
      }
  }
 
  return 0;
}

void insert()
{

  if( rear == max -1){

       printf("\nQueue overflow");
       return;
  }
  else{

       int item;

       rear += 1;
       printf("\nenter element to be inserted:");
       scanf("%d",&item);
       q[rear] = item;
       printf("%d is inserted\n",item);
  }
  
  if(front == -1)
         front = 0;

}

void delete(){

   int item;
   
   if(front == -1){
   
       printf("\nqueue underflow");
       return;
   }
   
   item = q[front];
   printf("%d is deleted\n",item);

   if(front == rear){
      
         front=rear=-1;
   }
   else
         front += 1;
}

void display()
{

   int i;
   
   if(front == -1){

       printf("queue is empty\n");
       return;
   }
   else{

       for(i = front; i <= rear; i++)
              
               printf("%d\n",q[i]);
   }
  
}