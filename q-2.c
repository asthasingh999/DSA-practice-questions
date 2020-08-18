//Q.2  here size of an array is 3 arr[3]={1,2,3} create a function if user insert next element it returns with a message "Array Complete" instead of any error message
#include<stdio.h>
#include<string.h>
#include<errno.h>
const char* message(int a[],int n){
for(int i=0;i<=n;i++)
{
    if(i<n)
        scanf("%d",&a[i]);
    else
       {printf("%d",errno);
        perror("array complete");}
}
}
int main(){
int n;
scanf("%d",&n);
int a[n];
printf("%s",message(a,n));
return 0;}
