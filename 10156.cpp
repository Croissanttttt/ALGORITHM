#include<stdio.h>
int main(void){
	int K, N, M, a;
	scanf("%d %d %d",&K,&N,&M);
	a=(K*N)-M;
	if(a<0){a=0;}
	printf("%d",a);
	return 0;
} 
