#include<stdio.h>
int a0;int b0;int c0;int d0;int e0;int f0;int g0;
int sum=0;int min=100;
int main(void){
	scanf("%d %d %d %d %d %d %d",&a0,&b0,&c0,&d0,&e0,&f0,&g0);
	if(int a=a0%2==1){sum=sum+a0;if(min>a0){min=a0;}}
	if(int b=b0%2==1){sum=sum+b0;if(min>b0){min=b0;}}
	if(int c=c0%2==1){sum=sum+c0;if(min>c0){min=c0;}}
	if(int d=d0%2==1){sum=sum+d0;if(min>d0){min=d0;}}
	if(int e=e0%2==1){sum=sum+e0;if(min>e0){min=e0;}}
	if(int f=f0%2==1){sum=sum+f0;if(min>f0){min=f0;}}
	if(int g=g0%2==1){sum=sum+g0;if(min>g0){min=g0;}}
	
	if(sum==0){printf("-1");}
	else{printf("%d\n%d",sum,min);}
	return 0;
}
