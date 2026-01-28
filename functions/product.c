#include<stdio.h>
#include<conio.h>
void mul();
int main(){
  mul();
getch();
return 0;
}
void mul(){
int a,b,m;
printf("Enter any two numbers:\n");
scanf("%d%d",&a,&b);
m=a*b;
printf("Product of %d and %d is %d\n",a,b,m);
}
