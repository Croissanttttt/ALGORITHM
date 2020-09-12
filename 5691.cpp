#include<iostream>
#include<algorithm>
using namespace std;
int minf(int a,int b,int c){
	int num[3]={a,b,c};
	sort(num,num+3);
	return num[0];
}
int main(){
	int A, B, C;
	cin>>A>>B;
	while(A!=0&&B!=0){
		if (A > B) {
			int temp = A;
			A = B;
			B = temp;
		}
		C = minf(2*A-B,2*B-A,(A+B)/2);
		cout<<C<<'\n';
		cin>>A>>B;
	}
	
	return 0;
}
