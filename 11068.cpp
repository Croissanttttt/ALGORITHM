#include<iostream>
#include<vector>
using namespace std;
int main(){
	int T,a;
	cin>>T;
	int ans[T];
	int num[T];
	bool key;
	for(int i = 0;i<T;i++){
		cin>>num[i];
	}
	
	for(int i = 0;i<T;i++){
		for(int j = 2;i<65;i++){
			key = true;
			vector<int> temp;
			do{
				temp.push_back(num[i]%j);
				num[i] = num[i]/j;
			}while(num[i]>=j);
			temp.push_back(num[i]);
			a=temp.size();
		for(int k=0;k<a/2;k++)
		{
			if(temp[k]!=temp[a-k-1])
			{
				key=false;
			}
		}
		if(key)
		{
			cout<<"1"<<endl;
			break;
		}
		}
	if(!key)
		{
			cout<<"0"<<endl;
		}
	}

	return 0;
}
