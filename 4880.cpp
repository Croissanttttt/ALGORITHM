#include<iostream>
#include<vector>
using namespace std;
int main(){
	int a, b, c;
	while(1){
		cin>>a>>b>>c;
		if(a==0&&b==0&&c==0){
			break;
		}
		if(b-a==c-b){
			cout<<"AP "<<2*c-b<<'\n';
		}
		else{
			cout<<"GP "<<c*(c/b)<<'\n';
		}
	}
	
	return 0;
}
