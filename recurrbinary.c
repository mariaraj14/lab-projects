#include<stdio.h>
void sort(int a[],int);
int recurbinary(int a[],int,int,int,int);

int main(){
int a[40],n,key,i,first=0,s;
printf("enter size");
scanf("%d",&n);
printf ("enter nos");


for (i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
sort(a,n);
printf (" binary search ");
printf("enter key");
scanf("%d",&key);
int last =n-1;
s=recurbinary(a,n,key,first,last);
if(s==0)
	printf("not found");
else
	printf("found and array index %d",s);

 }


int recurbinary(int a[],int n,int key,int first,int last)
{
int mid;
if(first>last)
	return 0;
else
{
mid=(first+last)/2;
if(a[mid]==key)
 return mid;
if(key<a[mid])
return recurbinary(a,n,key,first,mid-1);
else
return recurbinary(a,n,key,mid+1,last);

}
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
}


