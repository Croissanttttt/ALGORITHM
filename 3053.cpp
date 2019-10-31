#include<stdio.h>
#define PI 3.141593
int main(void){
	float R, Su, St;
	scanf("%f",&R);
	Su=PI*(R*R);
	St=2*(R*R);
	printf("%f\n%f",Su,St);
}
