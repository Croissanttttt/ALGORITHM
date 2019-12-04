#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main(){
	int T;
	cin>>T;
	string ans;
	for(int i = 0; i < T; i++){
		string q;
		string key;
		getline(cin,q);
		getline(cin,key);
		for(int j = 0; j<q.length();j++){
			char* temp;
			temp = strchr(key,q[j]);
			if(temp==NULL){
				ans[j] = " ";
				continue;
			}
			ans[j] = temp + 64;
		}
	}
	return 0;
}
