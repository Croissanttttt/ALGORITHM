#include<iostream>
#include<algorithm>
using namespace std;
bool compare(int a, int b){
	return a>b;
}

int main(){
	int num[3];
	for(int i=0;i<3;i++){
		cin>>num[i];
	}
	sort(num,num+3,compare);
	
	cout<<num[1];
	
	return 0;
}
