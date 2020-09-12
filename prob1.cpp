#include<iostream>
#include<string>
#include<vector>

using namespace std;

string solution(string new_id) {
	string answer = "";
	vector<int> temp;
	//step1
	for (int i = 0; i < new_id.length(); i++) {
		temp.push_back(new_id[i]);
		if (temp[i] >= 65 && temp[i] <= 90) {
			temp[i] = temp[i] + 32;
		}
	}
	//step2
	for (int i = 0; i < temp.size(); i++) {
		if((temp[i] >= 33 && temp[i] <= 44)||(temp[i] ==47)||(temp[i] == 96)||(temp[i] >= 58 && temp[i] <= 94)||(temp[i] >= 123 && temp[i]<=126)){
			for (int j = i; j < temp.size(); j++) {
			temp[j] = temp[j + 1];
			}
			i--;
			temp.pop_back();
		}
	}
	//step3
	for(int i = 0; i < temp.size(); i++){
		if(temp[i] == 46 && temp[i+1] == 46){
			for(int j = i; j < temp.size(); j++){
				temp[j] = temp[j + 1];
			}
			i--;
			temp.pop_back();
		}
	}
	//step4
	for(int i = 0; i < temp.size(); i++){
		bool a = 0;
		if(temp[0]==46){
			a = 1;
			for(int j = 0; j < temp.size(); j++){
				temp[j] = temp[j + 1];
			}
			temp.pop_back();			
		}
		if(temp[temp.size()-1]==46){
			temp.pop_back();
			continue;
		}
		if(a == 1){
			i--;
			a = 0;
			continue;
		}
		break;
	}
	//step5
	if(temp.empty() == 1){
		temp.push_back(97);
	}
	//step6
	if(temp.size()>=16){
		int a = temp.size();
		for(int i = 0; i < (a-15); i++){
			temp.pop_back();
		}
		if(temp[temp.size()-1]==46){
			temp.pop_back();
		}
	}
	//step7
	if(temp.size() <= 2){
		int a = 3 - temp.size();
		for(int i = 0; i < a; i++){
			temp.push_back(temp[temp.size()-1]);
		}
	}

	for (int i = 0; i < temp.size(); i++) {
		char temp_ans = temp[i];
		answer.push_back(temp_ans);
	}
	cout<<answer<<endl;
	return answer;
}

int main() {
	string new_id = "...!@BaT#*..y.abcdefghijklm";
	solution(new_id);
	return 0;
}
