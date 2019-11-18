#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(int a, int b) {
	return a > b;
}

int main() {
	vector<int> v;
	int mat[3];
	for(int i = 0; i < 3; i++) {
		int num;
		cin >> num;
		mat[i] = num;
		v.push_back(num);
	}
	sort(&mat[0], &mat[2], compare);
	for(int i = 0; i < 3; i++) {
		cout << mat[i] << '\n';
	}
}
