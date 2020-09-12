#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int T,a;
	cin>>T;
	int ans[T];
	int num[T];
	for(int i = 0;i<T;i++){
		cin>>num[i];
	}
	
	for(int i = 0;i<T;i++){
		ans[i]=1;
		for(int j = 2;j<65;j++){
			vector<int> temp;
			do{
				temp.push_back(num[i]%j);
				num[i] = num[i]/j;
			}while(num[i]>=j);
			temp.push_back(num[i]);
			a=temp.size();
			for(int k = 0;k<a/2;k++){
				if(temp[k]!=temp[a-1-k])
				{
					ans[i]=0;
					break;
				}
			}
			if(ans[i]==1){break;}
		}
		cout<<ans[i]<<'\n';
	}

	return 0;
}
