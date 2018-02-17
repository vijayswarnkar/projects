#include <bits/stdc++.h>
#define M 205
using namespace std;

int b,g,n,a[M];
int flag = 0;

void solve(int cboy, int tg, int index, vector<int> bArr, vector<int> gArr){
	if(flag == 1){
		return;
	}
	if(index == n){
//		cout << "Reached\n";
		for(int i = 0; i < bArr.size(); i++){
			cout << bArr[i] << " " << gArr[i] << endl;
		}
		flag = 1;	
	}else{
		int total = a[index];
		for(int i = cboy; i <= b; i++){
			for(int j = 0; j <= tg; j++){
				if(i + j == total){
					bArr.push_back(i-cboy);
					gArr.push_back(tg-j);

					solve(i, j, index+1, bArr, gArr);				

					bArr.pop_back();
					gArr.pop_back();					
				}
			}
		}
	}	
}

int main() {
	cin >> b >> g >> n;	
	for(int i= 0; i < n; i++){
		cin >> a[i];		
	}
	vector<int> bArr, gArr;
	solve(0, g, 0, bArr, gArr);
	if(flag == 0){
		cout <<"ERROR\n";
	}
	return 0;
}
