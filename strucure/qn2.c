//Create a structure named book with data members name, price and author name. Take input for 10 records of the book and print the name of the author having the price of the book in between 500 and 1000
#include<stdio.h>
#include<conio.h>
#include<string.h>
struct book{
char name[20],auth[30];
float price;

};
int main(){
int i;
struct book b[10];
printf("Enter the details of 10 books\n");
for(i=0;i<10;i++){
        printf("Enter name, price and author of book %d\t",i+1);
scanf("%s%f%s",b[i].name,&b[i].price,b[i].auth);
        }
        printf("Name of Authors with book price between 500 to 1000:\n");
        for(i=0;i<10;i++){
         if(b[i].price>500 && b[i].price<1000){
            printf("%s",b[i].auth);
         }
        }
}
