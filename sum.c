#include<stdio.h>
#include<conio.h>
int sum(int a,int b,int c);
int main(){
int x,y,z,s;
printf("Enter the values of x, y, and z\n");
scanf("%d%d%d",&x,&y,&z);
s=sum(x,y,z);
printf("The sum of 3-integers is %d",s);
getch();
return 0;
}
int sum(int a,int b,int c)
{
    int addition=a+b+c;
    return(addition);

}
