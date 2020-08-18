//Q.3 int arr[]={1,2,4,2,3,5,4,7,6,5,8,67,6,5,4,5,4,5,4,3,2,1,2,3,4,5,6,7,8,9,0,9,8,9,0,9,8,7,8,7,6,7,6,5,3}. Remove duplicates from above array and print all different elements.
#include<stdio.h>
void bubble_sort(int a[],int n)
{
int flag=0,temp;
for(int i=n-1;i>=0;i--)
{flag=0;
for(int j=0;j<=i-1;j++)
{if(a[j]>a[j+1])
{temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
flag=1;
}}
if(flag==0)
break;
}}
int remove_duplicate(int a[],int n){
int j=0;
for(int i=0;i<n-1;i++)
{
    if(a[i]!=a[i+1])
        a[j++]=a[i];
}
a[j++]=a[n-1];
return j;
}
int main(){
int a[]={1,2,4,2,3,5,4,7,6,5,8,67,6,5,4,5,4,5,4,3,2,1,2,3,4,5,6,7,8,9,0,9,8,9,0,9,8,7,8,7,6,7,6,5,3};
int n=sizeof(a)/sizeof(a[0]);
bubble_sort(a,n);
int s=remove_duplicate(a,n);
for(int i=0;i<s;i++)
    printf("%d ",a[i]);
return 0;
}
