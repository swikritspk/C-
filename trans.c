//WAP TO ENTER A 3*4 MATRIX AND DISPLYA ITS TRANSPOSE
#include<stdio.h>
#include<conio.h>
int main(){
int temp[3][4],m[3][4],i,j;
printf("Enter the matrix row wise\n");
for(i=0;i<3;i++){
    for(j=0;j<4;j++){
        printf("enter m[%d][%d]:\t",i+1,j+1);
        scanf("%d",&m[i][j]);
        }
        }
for(i=0;i<3;i++){
    for(j=0;j<4;j++){
    temp[i][j]=m[j][i];
  }
}
printf("YOU ENTERED:\n");
for(i=0;i<3;i++){
    for(j=0;j<4;j++){
        printf("%d\t",m[i][j]);
    }
    printf("\n");
}
printf("TRANSPOSE IS:\n");
for(i=0;i<3;i++){
    for(j=0;j<4;j++){
        printf("%d\t",temp[i][j]);
    }
    printf("\n");
}
getch();
return 0;
}


