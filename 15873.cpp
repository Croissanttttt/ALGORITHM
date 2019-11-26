#include<iostream>
#include<vector>
using namespace std;
int main(){
	int N;
	cin>>N;
	long long road[N], oil[N];
	long long cost=0;
	road[0]=0;
	for(int i=0;i<N-1;i++){
		cin>>road[i];
	}
	for(int i=0;i<N;i++){
		cin>>oil[i];
	}
	int min =0;
	for(int i=0;i<N-1;i++){
		cost=cost+(road[i]*oil[i]);
		if(oil[i]<oil[i+1]){
			oil[i+1]=oil[i];
	}
}
	cout<<cost<<endl;
	
	return 0;
}
