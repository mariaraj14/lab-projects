#include <stdio.h>
#include <stdlib.h>
#define max 3
int a[max];
int top=-1;
void push(int data)
{
 if(top==max-1)
	{
	   printf("impossible");
	}
 else{
	top++;
	a[top]=data;
      }
}
void pop()
{
int b;
 if(top<0)
	{printf("empty");
	}
b=a[top];
top--;
printf("deleted element %d",b);
}
void display()
{
int i;

if(top<0){
	   printf("stack is empty");
}
else{
	for(i=0;i<=top;i++)
	{
	  printf("%d",a[i]);
 	}
}
}
	

	
int main()
{
int data,c;
while(1){
printf("\n1.push : 2.pop : 3.display :4.exit choose option");
scanf("%d",&c);
if(c==1)
{
printf("enter the data to be pushed");
scanf("%d",&data);
	push(data);
}
else if(c==2)
{
	pop();
}
else if(c==3)
{
	display();
}
else if(c==4)
{break;}
else
{
printf("error");
}
}
}
