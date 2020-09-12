#include<iostream>

using namespace std;

int T, N, M;
int Coin[20];

int method(void){
	int result[10001];
	for(int k = 0; k < 10001; k++){
		result[k] = 0;
	}
	result[0] = 1;
	for(int i = 0; i < N; i++){
		for(int j = Coin[i]; j <= M; j++){
			result[j] = result[j] + result[j - Coin[i]];
		}
	}
	return result[M];
}

int main(){
	cin>>T;
	for(int i = 0; i < T; i++){
		cin>>N;
		for(int j = 0; j < N; j++){
			cin>>Coin[j];
		}
		cin>>M;
		cout<<method()<<'\n';
	}
	return 0;
}
