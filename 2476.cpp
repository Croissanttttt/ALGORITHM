#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int N, prize=0, temp_prize=0;
	int num1[N],num2[N],num3[N];
	cin>>N;
	for(int i = 0;i<N;i++){
		cin>>num1[i]>>num2[i]>>num3[i];
		if(num1[i]==num2[i]&&num2[i]==num3[i]){
			temp_prize = 10000+num1[i]*1000;
		}
		else if(num1[i]==num2[i]!=num3[i]){
			temp_prize = 1000+num1[i]*100;
		}
		else if(num1[i]==num3[i]!=num2[i]){
			temp_prize = 1000+num1[i]*100;
		}
		else if(num1[i]!=num2[i]==num3[i]){
			temp_prize = 1000+num2[i]*100;
		}
		else{
		int temp[3] = {num1[i],num2[i],num3[i]};
		sort(temp,temp+3);
		temp_prize = 100 * temp[0];
		}
		if(prize<temp_prize){
			prize = temp_prize;
		}
	}
	cout<<prize;

	return 0;
}
