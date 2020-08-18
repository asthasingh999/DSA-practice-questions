//Q.1 Create an array by user of size 2n and shuffel  array with mth element eg Input: nums = [2,5,1,3,4,7], n = 3 Output: [2,3,5,4,1,7] 
//Explanation: Since x1=2, x2=5, x3=1, y1=3, y2=4, y3=7 then the answer is [2,3,5,4,1,7].

#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int a[2*n],temp[2*n],k=n;
for(int i=0;i<2*n;i++)
    scanf("%d",&a[i]);
int i=0,l=0;
while(i<2*n)
{if(i%2==0)
    {temp[i]=a[0+l];
    l++;
    i++;}
else
    {temp[i]=a[0+k];
    k++;
    i++;}}
for(int i=0;i<2*n;i++)
printf("%d",temp[i]);
}
