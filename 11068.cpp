#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int T;
	cin>>T;
	bool key;
	int num[T];
	for(int i = 0;i<T;i++){
		cin>>num[i];
	}
	
	for(int i = 0;i<T;i++){
		key=false;
		for(int j = 2;j<65;j++){
			int x = num[i];
			vector<int> temp;
			vector<int> rev;
			do{
				rev.push_back(num[i]%j);
				num[i] = num[i]/j;
			}while(num[i]);
			num[i] = x;
			temp = rev;
			reverse(rev.begin(),rev.end());
			if(temp == rev){
				key = true;
				cout << 1 << '\n';
				break;
			}
		}
		if(!key) {
			cout << 0 << '\n';
		}
	}
	return 0;
}
