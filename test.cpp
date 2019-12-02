#include<iostream>
#include<vector>
using namespace std;
int main(){
	int num, a;
	cin>>num;
	vector<int> temp;
	do{
		temp.push_back(num%2);
		num = num/2;
	}while(num>=2);
	temp.push_back(num);
	a=temp.size();
	for(int i=0;i<a;i++){
		cout<<temp[i];
	}
}
