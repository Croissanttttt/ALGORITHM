#include<iostream>
#include<string>
<<<<<<< HEAD
using namespace std;
int main() {
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int k = 0;
		string q, key;
		if (i == 0) { getline(cin, q); }
		getline(cin, q);
		getline(cin, key);
		char ans[q.length()];
		while (q.length() > k) {
			for (int j = 0; j < 26; j++) {
				if (q[k] == j + 65) {
					ans[k] = key[j];
					break;
				}
				if (q[k] == 32) {
					ans[k] = ' ';
					break;
				}
			}
			k++;
		}
		for (int j = 0; j < q.length(); j++) {
			if (ans[j] == -52) { break; }
			cout << ans[j];
		}
		cout << '\n';
	}

=======
#include<cstring>
using namespace std;
int main(){
	int T;
	cin>>T;
	string ans;
	for(int i = 0; i < T; i++){
		string q;
		string key;
		getline(cin,q);
		getline(cin,key);
		for(int j = 0; j<q.length();j++){
			char* temp;
			temp = strchr(key,q[j]);
			if(temp==NULL){
				ans[j] = " ";
				continue;
			}
			ans[j] = temp + 64;
		}
	}
>>>>>>> d420c373346c12f6500078a6c6a7fb8a7b18e678
	return 0;
}
