#include<stdio.h>
void inser(int a[],int);
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
inser(a,n);


printf("sorted array");

for(i=0;i<n;i++)
{
printf("%d \t",a[i]);
}
printf("\n");
}
void inser(int a[],int n)
{
  for(int i=1;i<n;i++)
{
 int key=a[i];
int j= i-1;
while(key<a[j] && j>=0){
 a[j+1]=a[j];
--j;
}
a[j+1]=key;
}
}
