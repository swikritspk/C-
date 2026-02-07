//Create a structure named book with data members name, author and publisher. Write a program to read the data of 50 books and display the names of the book which is published by "xyz" publisher
#include<stdio.h>
#include<conio.h>
#include<string.h>
struct book{
    char name[30], author[20],publisher[30];


};
int main(){
int i;
struct book b[5];
printf("Enter the name, author and publisher of the book\n");
for(i=0;i<5;i++){
    scanf("%s%s%s",b[i].name,b[i].author,b[i].publisher);
}
printf("Details of book by XYZ publisher are\n");
printf("Name\t Author\t Publisher\n");
for(i=0;i<5;i++){
        strlwr(b[i].publisher);
    if(strcmp(b[i].publisher, "xyz") == 0){
    printf("%s\t%s\t%s\n",b[i].name,b[i].author,b[i].publisher);
}
}
getch();
return 0;
}
