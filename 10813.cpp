#include<iostream>
using namespace std;
int main(){
	int N, M;
	cin>>N>>M;
	int n[N];
	for(int i = 0;i < N;i++){
		n[i]=i+1;
	}
	for(int k = 0; k < M;k++){
		int i, j, temp = 0;
		cin>>i>>j;
		temp = n[i-1];
		n[i-1] = n[j-1];
		n[j-1] = temp;
	}
	for(int i = 0;i < N;i++){
		cout<<n[i]<<' ';
	}
	
	return 0;
}
