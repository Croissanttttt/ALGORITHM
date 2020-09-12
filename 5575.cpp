#include<iostream>
using namespace std;

int main(){
	int s[3], e[3];
	for(int j = 0; j < 3; j++){
		for(int i = 0; i < 3; i++){
			cin>>s[i];
		}
		for(int k = 0; k < 3; k++){
			cin>>e[k];
		}
		int s_temp = s[0] * 3600 + s[1] * 60 + s[2];
		int e_temp = e[0] * 3600 + e[1] * 60 + e[2];
		int sum_temp = e_temp - s_temp;
		int sum[3];
		sum[0] = sum_temp/3600;
		sum[1] = (sum_temp%3600)/60;
		sum[2] = (sum_temp%3600)%60;
		cout<<sum[0]<<' '<<sum[1]<<' '<<sum[2]<<'\n';
	}

	
	return 0;
}
