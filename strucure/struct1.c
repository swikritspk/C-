//Create a structure called person with data member name, occupation and age.Write a program to scan the details of 100 persons and short the details of the persons on the basis of descending order of age and display it.
#include<stdio.h>
#include<conio.h>
struct person{
char name[40],job[20];
int age;
}str[100],temp;
int main(){
int i,j;
printf("Enter the name, address and age of 100 persons\n");
for(i=0;i<100;i++){
   printf("person no.%d:\t",i+1);
   scanf("%s%s%d",str[i].name,str[i].job,&str[i].age);
}
for(i=0;i<100;i++){
    for(j=i+1;j<100;j++){
        if(str[i].age<str[j].age){
            temp=str[i];
            str[i]=str[j];
            str[j]=temp;

        }
    }
}
printf("Details of person\n");
   printf("SN.\tName\tJob\t\tAge\n");
for(i=0;i<100;i++){
    printf("%d\t%s\t%s\t\t%d\n",i+1,str[i].name,str[i].job,str[i].age);
}
getch();
return 0;
}
