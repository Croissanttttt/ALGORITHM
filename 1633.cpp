#include<iostream>
using namespace std;
int main(){
	int white[1000], black[1000];
	int temp_index[1000];
	while(!cin.eof()){
		int cnt = 0;
		int temp_bl[15], sortwh[16], sortbl[16];
		cin>>white[cnt]>>black[cnt];
		if(cnt < 15){
			temp_bl[cnt] = black[cnt];
			sortwh[cnt] = white[cnt];
			temp_index[cnt] = cnt;
		}
		
		cnt++;
	}
	
	return 0;
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

