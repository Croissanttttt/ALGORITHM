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
	}
}
