#include <bits/stdc++.h>
#define MAX 100005
#define BITS 4
using namespace std;
typedef long long int lli;
int dp[100][100];
int s[100];
int n = 7, m= 3, k=1;

int solve(int n, int m){
	if(m == 0){
		return 0;
	}
	if(n < k-1){
		cout << n << " returning..\n";
		return 0;
	} 	
	if(dp[n][m] != -1){
		cout << n << "," << m << ":" <<dp[n][m] << endl;
		return dp[n][m];
	} else {
		dp[n][m] = max(solve(n-1, m), solve(n-k, m-1)+s[n]-s[n-k]);
		cout << n << "," << m << ":" <<dp[n][m] << endl;
		return dp[n][m];
	}
}
int main(int argc, char const *argv[])
{
	int a[] = {2,10, 7, 18, 5, 33, 0};
	s[0] = a[0];

	for(int i=1; i<n;i++){
		s[i] += s[i-1];
	}	
	cout << "MAX_SUM_SUBARRAY\n";
	memset(dp, -1, sizeof(dp));
	int ans = solve(n-1, m);
	cout << ans<<endl;
	return 0;
}