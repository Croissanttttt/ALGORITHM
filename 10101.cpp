#include<stdio.h>
int main(void){
	int a, b, c, sum;
	scanf("%d %d %d",&a,&b,&c);
	sum=a+b+c;
	if(a==60&b==60&c==60){printf("Equilateral");}
	else if((sum==180)&(a==b|b==c|c==a)){printf("Isosceles");}
	else if((sum==180)&(a!=b!=c)){printf("Scalene");}
	else if(sum!=180){printf("Error");}
	return 0;
}
