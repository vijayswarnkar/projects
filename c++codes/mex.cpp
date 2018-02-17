#include <bits/stdc++.h>
using namespace std;

int main(){	
	int n, x;
	int a[105];
	memset(a, 0, sizeof(a));
	cin >> n>> x;
	for(int i=0;i<n;i++){
		int b;
		cin >> b;	
		if(b <= x){
			a[b] = 1;
		}
	}
	int c = 0;
	for(int i=0; i<x; i++){
		if(a[i] == 0){
			c++;
		}	
	}
	if(a[x] == 1){
		c++;
	}
	cout << c << endl;
	return 0;
}
