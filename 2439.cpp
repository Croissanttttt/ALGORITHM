#include<stdio.h>
int main(void){
	int N, i, j;
	scanf("%d",&N);
	for(i=1;i<N+1;i++){
		for(j=N;j>i;j--){
			printf(" ");
		}
		for(j=1;j<i+1;j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
