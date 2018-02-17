#include <bits/stdc++.h>

using namespace std;
int arr[1000005];

int main(){	
	arr[0] = 0, arr[1] = 1;
	vector<int> v;
	v.push_back(31);
	v.push_back(14);
	v.push_back(15);
	v.push_back(7);
	v.push_back(2);
	
	sort(v.begin(), v.end());
	
	for(int i=2; i < 1000005; i++){
		int n = log2(i);
		int no = pow(2, n);
		if(no == i){
			arr[i] = 1; 			
		}else{
			arr[i] = arr[no] + arr[i-no]; 
		}
	}
	vector<int> vv[25];
		
	for(int i=0; i < v.size(); i++){
		int nz = arr[v[i]];
		vv[nz].push_back(v[i]);
	};	

	for(int i=24; i >= 0; i--){
		if(vv[i].size() > 0){
			for(int j =vv[i].size()-1; j >= 0; j--){
				cout << vv[i][j] << endl;
			}			
		}
	}		
	return 0;
}
