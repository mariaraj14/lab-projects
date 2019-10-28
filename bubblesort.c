#include<stdio.h>
void sort(int a[],int);


int main(){
int a[40],n,i;
printf("enter size");
scanf("%d",&n);
printf ("enter nos");
for (i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
sort(a,n);
}

void sort(int a[],int n)
{
int i ,j,temp;
for(i=0;i<n;i++)
{
 for(j=0;j<n-i-1;j++)
{
 if(a[j]>a[j+1])
  {
 	temp=a[j];
	a[j]=a[j+1];
	a[j+1]=temp;
}

}
}
printf("sorted array");
for(i=0;i<n;i++)
{
 printf("%d",a[i]);
}
}

