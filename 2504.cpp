#include<iostream>
using namespace std;

int main(){
	string n;
	cin>>n;
	int C = 0, R = 0;
	for(int i = 0; i < n.length(); i++){
		if(n[i] == '('){
			C++;
			continue;
		}
		if(n[i] == ')'){
			C--;
			continue;
		}
		if(n[i] == '['){
			R++;
			continue;
		}
		if(n[i] == ']'){
			R--;
			continue;
		}
	}
	cout<<C<<'\n'<<R<<'\n';

	return 0;
}
