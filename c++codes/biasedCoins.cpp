#include <bits/stdc++.h>

using namespace std;

int n, k;
float a[10];
float dp[10][10];

float prob(int n, int k){
	if(dp[n][k] != -1){
		return dp[n][k];
	}
	cout << n << ", " << k << endl;
	if(n == 0) return 0.0;
	if(k == 0){		
		float pp = 1;
		for(int i=n; i > 0; i--) pp *= (1-a[i]);
		return pp;
	}
	float ans = prob(n-1, k-1)*a[n]	+ (1-a[n]) * prob(n-1, k);
	dp[n][k] = ans;
	return ans;
}

int main(){
	cin >> n >> k;
	for(int i=1; i <= n; i++){
		cin >> a[i];	
	}	
	for(int i = 0; i < 10; i++) for(int j = 0; j < 10; j++) dp[i][j]=-1;
	cout << prob(n,k) << endl;
	return 0;
}
