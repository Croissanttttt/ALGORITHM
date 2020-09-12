#include<iostream>
#include<string>
using namespace std;
int main(){
	string pw, st;
	char ans[30001];
	getline(cin,st);
	getline(cin,pw);

	for(int i=0;i<st.length();i=i+pw.length()){
		for(int j=0;j<pw.length();j++){
			if (st[i + j] != ' ') {
				if(st[i + j] - pw[j] + 'a' - 1 >= 'a'){
					ans[i + j] = st[i + j] - pw[j] + 'a' - 1;
				}else{
					ans[i + j] = 'z' + (st[i + j] - pw[j]); 
				}
			}
			else {
				ans[i + j] = ' ';
			}
		}
	}
	ans[st.length()]='\0';
	cout<<ans;
	
	return 0;
}
