#include<iostream>
#include<algorithm>
using namespace std;
int biggest(int a, int b, int c)
{
	if(b>a)
	{
		if(c>b)
		return c;
		else
		return b;
	}
	else
	{
		if(c>a)
		return c;
		else
		return a;
	}
	
}
int main(){
	int N, prize=0, temp_prize=0;
	cin>>N;
	int num1[N],num2[N],num3[N];
	for(int i = 0;i<N;i++){
		cin>>num1[i]>>num2[i]>>num3[i];
		if(num1[i]==num2[i]&&num2[i]==num3[i]){
			temp_prize = 10000+num1[i]*1000;
		}
		else if(num1[i]==num2[i]){
			temp_prize = 1000+num1[i]*100;
		}
		else if(num1[i]==num3[i]){
			temp_prize = 1000+num1[i]*100;
		}
		else if(num2[i]==num3[i]){
			temp_prize = 1000+num2[i]*100;
		}
		else{
		temp_prize = 100 * biggest(num1[i],num2[i],num3[i]);
		}
		if(prize<temp_prize){
			prize = temp_prize;
		}
		temp_prize = 0;
	}
	cout<<prize;

	return 0;
}
