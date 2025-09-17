#include<stdio.h>
int num=1;
int main()
{
int a,sum=0;
printf("Enter the number :");
scanf("%d",&a);
while (num<=a){
if (num % 2==1){
sum=sum+num;
}
num=num+1;
}
printf("sum of odd number = %d\n",sum);
return 0;
}
