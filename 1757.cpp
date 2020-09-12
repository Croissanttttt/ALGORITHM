#include<iostream>
using namespace std;
int main(){
	char a[5]={'a','b','c','d','e'};
	int c[5]={1,2,3,4,5};
	char b[5];
	for(int i=1;i<6;i++){
		b[i]=a[5-c[i]];
		cout<<b[i]<<'\n';
	}
	
	return 0;
}
