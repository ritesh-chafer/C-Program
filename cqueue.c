#include<stdio.h>
#include<stdlib.h>
#define max 5

int cq[max],front=-1,rear=-1;

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

void insert(){

   if((front == 0 && rear == max -1)||(front == rear + 1)){

               printf("\nCQ overflow\n");
               return;
   }

   if(front == -1)
         front=rear=0;
   
   else if(rear == max -1)
         rear = 0;
   else
    
         rear += 1;

   int item;
   printf("\nEnter element to be inserted:");
   scanf("%d",&item);
   cq[rear] = item;
   printf("%d is inserted\n",item);

}

void delete(){

    if(front == -1){
         printf("\nCQ is underflow");
         return;
    }
    else{
        int item;      
        item = cq[front];
        printf("%d is deleted\n",item);
        
    }
    
    if(front == rear){
          front = rear = -1;
    }
    else if(front == max -1){
          front = 0;
    }
    else{
          front += 1;
    }
}

void display(){
   
    int i;

    if(front > rear){

           for(i = 0;i <= front-1; i++)
                    printf("%d\n",cq[i]);

           for(i = rear + 1; i <= front -1; i++ )
                    printf("#\n");
           
           for(i = front; i <= max-1 ; i++)
                    printf("%d\n");

    }
    else{

           for(i = 0; i <= front ;i++)
                    printf("#\n");
   
           for(i = front; i <= rear ; i++)
                    printf("%d\n",cq[i]);

   }


}