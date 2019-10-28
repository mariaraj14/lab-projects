#include<stdio.h>
#include <stdlib.h>
#define MAX 4
int q[MAX];
int front=-1;
int rear=-1;

void enqueue(int data){
  if(front==(rear+1)%MAX){
    printf("QUEUE FULL\n");
  }
  else{
    if(front==-1){
      front++;
      rear++;
    }
    else{
      rear=(rear+1)%MAX;
    }
      q[rear]=data;
  }
}


void dequeue(){
  if(front==-1){
    printf("que is empty");
  }
  else if(front==rear)
  {
   front=rear=-1;
    }
  else
   {
     front=(front+1)%MAX;
    }
}

void display(){
int i;
if(front==-1)
{ printf("empty");
}
else if(front<=rear)
{
 for(i=front;i<=rear;i++)	
	{
         printf("%d",q[i]);
         }
}
else if(rear<front)
{
  for(i=front;i<=MAX-1;i++)
  {
    printf("%d",q[i]);
  }
  for(i=0;i<=rear;i++)
  {
   printf("%d",q[i]);
  }
}
}
void main(){
  int data,op;
  while(1){
    printf("\n1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY\n4.Exit\nSelect the operation:");
    scanf("%d",&op);
    if(op==1){
      printf("Enter the element to be enqueued:");
      scanf("%d",&data);
      enqueue(data);
    }
    else if(op==2){
      dequeue();
    }
    else if(op==3){

      display();
    }
    else if(op==4){
      exit(0);
    }
    else printf("INVALID OPERATION!!");

  }
}
