#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int N, ans = 0;
	cin>>N;
	if(N % 2 == 0){
		ans = pow((int)3,(int)N/2) + pow((int)3,(int)(N/2)-1);
		for(int i = 0; i < N/2; i++){
			ans = ans - pow((int)3,(int)i);
		}
	}
	else if(N % 2 == 1){
		ans = 2 * pow((int)3,(int)(N-1)/2) - pow((int)3,(int)((N-1)/2)-1) - 2;
	}
	if(N == 1){
		ans = 1;
	}
	cout<<ans;
	
	return 0;
}
