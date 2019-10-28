#include<stdio.h>
void sort(int a[],int);
int binary(int a[],int,int);
int linear(int a[],int,int);
int main(){
int a[40],n,key,b,c,i,p;
printf("enter size");
scanf("%d",&n);
printf ("enter nos");


for (i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf ("1.linear search \n 2.binary search \n 3.exit");
printf("enter your choice");
scanf("%d",&b);
printf("enter key");
scanf("%d",&key);
switch(b)
{
case 1:c=linear(a,n,key);
       if(c==-1)
            printf("not found");
       else 
               printf("found and array index %d",c);
       break;
case 2: p=binary(a,n,key);
	if(p==0)
	printf("not found");
	else
	printf("found and array index %d",p);
	break;

default:printf("error");
}
}
int linear(int a[],int n,int key)
{
int i;
for(i=0;i<n;i++)
{
if(a[i]==key)
return i;
}
return -1;
}
int binary(int a[],int n,int key)
{
int first,last,mid;
 sort(a,n);
first=0;
last=n-1;
while(first<=last){
mid=(first+last)/2;
if(a[mid]==key)
 return mid;
if(key<a[mid])
last=mid-1;
else
first=mid+1;
}
return 0;
}
void sort(int a[],int n)
{
int i ,j,temp;
for(i=0;i<n;i++)
{
 for(j=0;j<i-n-1;j++)
{
 if(a[j]>a[j+1])
  {
 	temp=a[j];
	a[j]=a[j+1];
	a[j+1]=temp;
}
}
}
}




