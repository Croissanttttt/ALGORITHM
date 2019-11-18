<<<<<<< HEAD
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
	int n;
	vector<int> v;
	cin >> n;
	for(int i = 0; i < n; i++) {
		int num;
		cin >> num;
		v.push_back(num);
	}
	for(int i = 0; i < n - 1; i++) {
		int min = v[i];
		int temp = i;
		for(int j = i+1; j < n; j++) {
			if(min > v[j]) {
				temp = j;
				min = v[j];
			}
		
		}
		v[temp] = v[i];
		v[i] = min;

	}
	for(int i = 0; i < v.size(); i++) {
		cout << v[i] << '\n';
=======
#include<iostream>
using namespace std;
int main(){
	int N;
	cin>>N;
	int num[N];
	for(int i=0;i<N;i++){
		cin>>num[i];
	}
	for(int i=0;i<N;i++){
		int min = num[i];
		int index = i;
		for(int j=i+1;j<N;j++){
			if(num[j]<min){
				min=num[j];
				index=j;

			}
		}
		num[index]=num[i];
		num[i]=min;
	}
	for(int i=0;i<N;i++){
		cout<<num[i]<<endl;
>>>>>>> cddd793d49d9792083cb655e5a9d752fbf74c3d3
	}
}
