#include<stdio.h>
int main(void){
	int h1, h2, h3;
	int b1, b2;
	int c1, c2, c3, c4, c5, c6=0;
	int cm=3951;
	scanf("%d %d %d %d %d",&h1, &h2, &h3, &b1, &b2);
	c1=h1+b1-50;
	c2=h1+b2-50;
	c3=h2+b1-50;
	c4=h2+b2-50;
	c5=h3+b1-50;
	c6=h3+b2-50;
	if(cm>c1){cm=c1;}
	if(cm>c2){cm=c2;}
	if(cm>c3){cm=c3;}
	if(cm>c4){cm=c4;}
	if(cm>c5){cm=c5;}
	if(cm>c6){cm=c6;}
//	printf("%d %d %d %d %d %d",c1,c2,c3,c4,c5,c6);
	printf("%d",cm);
	return 0;
}
