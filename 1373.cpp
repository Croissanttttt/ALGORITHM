#include<iostream>
#include<math.h>
using namespace std;
int main(){
	string binary;
	getline(cin,binary);
	int decimal=0, octal;
	for(int i=0;i<binary.length();i++){
		decimal = decimal + pow(2,binary.length()-i-1);
		cout<<binary[i]<<'\n';
		cout<<decimal<<'\n';
	}
	return 0;
}
