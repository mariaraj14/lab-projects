#include<stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node*link;
};
struct node *front=NULL;
struct node *rear=NULL;
struct node *newnode;
void push(int x)
{
  newnode=(struct node*)malloc(sizeof(struct node));
  if(newnode == NULL)
 {	printf ("empty");
  }
  else
  {  
    newnode->data=x;
    newnode->link=NULL;
   if(front==NULL)
      {
	front=newnode;
        rear=newnode;
       } 
   
    else
     {
	rear->link=newnode;
        rear=newnode;
     }
   }
}
void pop()
{
struct node*temp;
  if(front==NULL)
 {
   	printf("empty");
  }
  else
  {
	if(front==rear)
        {
         printf("\n the popped one %d",front->data);
         free(front);
         front=NULL;
         rear=NULL;
         }
   	else
        {
         printf("\nthe poped one %d",front->data);
 	temp=front;
        front=front->link;
        free(temp);
	}
  }
}
void display()
{
 struct node *temp;
 if(front==NULL)
 {
  printf("\nempty");
 }
 else
  {
    temp=front;
    while(temp!=NULL)
   {
     printf("\t%d",temp->data);
     temp=temp->link;
   }
  }
}
void main()
{
 int x, ch;
while(1){ 
 printf("\n\n1:push \n 2: pop \n 3:display \n 4:exit");
 scanf ("%d",&ch);
 if(ch==1)
{
 printf("enter data");
 scanf("%d",&x);
	push(x);
 }
 else if(ch==2)
 {  
    pop();
 }
 else if(ch==3)
 {
 display();
 }
 else
   break;
}
}

