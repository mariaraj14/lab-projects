#include<stdio.h>
void selec(int a[],int);



int main()
{
int a[40],n,i;
printf("enter size");
scanf("%d",&n);
printf ("enter nos");
for (i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
selec(a,n);


printf("sorted array");

for(i=0;i<n;i++)
{
printf("%d \t",a[i]);
}
printf("\n");
}
void selec(int a[],int n)
{
 int min,temp;
for(int i=0;i<n-1;i++)
{
min=i;
for (int j=i+1;j<n;j++)
{
if(a[j]<a[min])
{
min=j;
}}

temp=a[min];
a[min]=a[i];
a[i]=temp;
}
}







