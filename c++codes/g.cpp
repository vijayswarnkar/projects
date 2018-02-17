#include <bits/stdc++.h>
using namespace std;
int c[1000005];
int n, x, ans;

int ad(int x, int y){
	if(abs(x-y) == 1) return 1;
	else return 0;
}

void up(int x, int off){
	c[x+off]++;
}

void print(){
	for(int i = 1; i <= 2*n; i++){
		cout << i << " ";
	}cout << endl;
	for(int i = 1; i <= 2*n; i++){
		cout << c[i] << " ";
	}cout << endl;	
}
int count(int i, int x ,int ){
	
}
int main(){	
	cin >> n;
	for(int i= 1; i < n+1; i++){
		cin >> x;
		if(ad(i,x)) {
			cout << "Adjacent\n";
			continue;	
		}
		if(x > i){
			up(x,0);
			ans += count(i+1,x,0);
		} else {
			up(x,n);
			ans += count(i,x,n);
		}
		print();
	}
		
	return 0;
}
