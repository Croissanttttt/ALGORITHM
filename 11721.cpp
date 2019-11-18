#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
	string N;
	getline(cin, N);
	for(int i=0;i<N.size();i++){
		cout<<N[i];
		if((i+1)%10==0){
			cout<<endl;
		}
	}
	cout<<endl;
	return 0;
}
