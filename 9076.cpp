#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int T;
	cin>>T;
	int score[5], ans[T];
	for(int i = 0; i < T;i++){
		for(int j = 0;j < 5;j++){
			cin>>score[j];
		}
		sort(score,score+5);
		if(score[3]-score[1]>=4){
			ans[i] = 0;
			continue;
		}
		else{
			ans[i] = score[1] + score[2] + score[3];
		}
	}
	for(int i = 0; i < T;i++){
		if(ans[i]==0){
			cout<<"KIN"<<'\n';
			continue;
		}
		cout<<ans[i]<<'\n';
	}
	
	return 0;
}
