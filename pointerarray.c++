#include<stdio.h>
int main(){
	int num[5];
	int *ptr;
	int g;
	int loop;
	ptr=num;
	for(loop=0;loop<5;loop++){
		printf("Enter number");
		scanf("%d",num+loop);
	}
	g=*(num+0);
	for(loop=0;loop<5;loop++){
		if(*(num+loop)>g){
			g=*(num+loop);
		}
}
printf("%d is the greatest number ",g);
}
