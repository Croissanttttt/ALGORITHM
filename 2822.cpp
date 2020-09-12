#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int score[8];
	int num[8];
	int sum=0;
	for(int i=0;i<8;i++){
		cin>>score[i];
	}
	for(int i=0;i<8;i++){
		int max = score[i];
		int index = i;
		for(int j=i+1;j<8;j++){
			if(score[j]>max){
				max=score[j];
				index=j;
			}
		}
		score[index]=score[i];
		score[i]=max;
		num[i]=index+1;
	}
	sort(num,num+5);
	for(int i=0;i<5;i++){
		sum=sum+score[i];
	}
	cout<<sum<<endl;
	for(int i=0;i<5;i++){
		cout<<num[i]<<" ";
	}
	return 0;
}
