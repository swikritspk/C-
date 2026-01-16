    //WAP to scan the string and sort the characters of the given string in alphabetical order//
    #include<stdio.h>
    #include<conio.h>
    #include<string.h>
    int main(){
    char s[20], temp;
    int i,j,l;
    printf("Enter a string\n");
    scanf("%s",s);
    l=strlen(s);
    for(i=0;i<l;i++){
        for(j=i+1;j<l;j++){
            if(s[i]>s[j]){
            temp=s[i];
            s[i]=s[j];
            s[j]=temp;
        }
    }
    }
    printf("The sorted string in alphabetical order is %s",s);
    getch();
    return 0;
    }
