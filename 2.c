#include<stdio.h>
int main()
{
int a,b;
float result;
printf("Enter two number:");
scanf("%d%d",&a,&b);
result=(float)a/b;
printf("The division of %d by %d is:%.2f\n",a,b,result);
return 0;
}
