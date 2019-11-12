#include<iostream>
using namespace std;
int main(){
	int N;
	cin>>N;
	int num[N];
	for(int i=0;i<N;i++){
		cin>>num[i];
	}
	for(int i=0;i<N;i++){
		int min = num[i];
		int index = i;
		for(int j=i+1;j<N;j++){
			if(num[j]<min){
				min=num[j];
				index=j;

			}
		}
		num[index]=num[i];
		num[i]=min;
	}
	for(int i=0;i<N;i++){
		cout<<num[i]<<endl;
	}
}
