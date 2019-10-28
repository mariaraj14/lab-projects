#include<stdio.h>
#include<stdlib.h>

typedef struct node{
  int coef;
  int exp;
  struct node* link;
}node;

node* phead=NULL;
node* qhead=NULL;
node* rhead=NULL;

void display(node* head){
  node* temp=head;
  printf("\n\n");
  while(temp!=NULL){
    printf("%dx^%d\t",temp->coef,temp->exp);
    temp=temp->link;
  }
  printf("\n\n");
}


node*void insert(node* head){
  int deg,coef;
  node* ptr;
  printf("Enter the degree of the polynomial:");
  scanf("%d",&deg);
  for(int i=deg;i>=0;i--){
    printf("Enter the coefficent of x^%d:",i);
    scanf("%d",&coef);
    if(coef!=0){
      node* newnode=(node*)malloc(sizeof(node));
      newnode->coef=coef;
      newnode->exp=i;
      newnode->link=NULL;
      if(head==NULL){
	       head=newnode;
      }
      else{
	       ptr=head;
	        while(ptr->link!=NULL){
	            ptr=ptr->link;
	           }

	        ptr->link=newnode;
      }
    }
  }
    return head;
  }

void main(){
  printf("First Polynimial\n");
  phead=insert(phead);
  display(phead);
  printf("Second polynomial\n");
  qhead=insert(qhead);
  display(qhead);
}
