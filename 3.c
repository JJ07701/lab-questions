#include<stdio.h>
int num=50;
void show(){
int num=100;
printf("Inside the function,num=%d\n",num);
}
int main()
{printf("outside the function,num=%d\n",num);
show();
printf("back in main,num= %d\n",num);
return 0;
}
