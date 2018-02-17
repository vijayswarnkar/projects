#include <bits/stdc++.h>

using namespace std;

int perfect(int n){
	if(n & (n-1)) return 1;
	else return 0;	
}

int main(){
	int n,x;
	cin >> n;
	int h = log2(n);	
	int leafs = n-(1<<h) - 1;
	cout << h << endl;
	cout << leafs << endl;
	return 0;
}
