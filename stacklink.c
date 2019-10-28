#include<stdio.h>
#include <stdlib.h>
#define max 4
struct node
{
  int data;
  struct node*link;
};
struct node *top=NULL;
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
   if(top==NULL)
        {
	newnode->link= NULL;
        top=newnode;
        }
    else
     {
	newnode->link=top;
        top=newnode;
     }
   }
}
void pop()
{
struct node*temp;
  if(top==NULL)
 {
   	printf("empty");
  }
  else
  {
   	printf("\nthe poped one %d",top->data);
 	temp=top;
        top=top->link;
        free(temp);
  }
}
void display()
{
 struct node *temp;
 if(top==NULL)
 {
  printf("\nempty");
 }
 else
  {
    temp=top;
    while(temp!=NULL)
   {
     printf("\t%d",temp->data);
     temp=temp->link;
   }
  }
}
int main()
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
