#include <stdio.h>
float add(int a, float b) {
    float s=a+b;
    return s;
}
void main(){
int x;
float y, sum;
printf("Enter values of x and y:");
scanf("%d%f",&x,&y);
sum=add(x,y);
printf("\nThe sum=%f",sum);
}
