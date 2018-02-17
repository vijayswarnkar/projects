#include <bits/stdc++.h>
#define M 200006
using namespace std;
typedef  long long int lli;
int a[M];
int color[M];
vector<int> v[M];
int n;
int dp[M];

int solve(int st, int ans){
	if(dp[st] != -1){
		cout << "served.." << st << "," << ans << endl;
		return dp[st];
	}
	cout << st << ", " << ans << endl;
	if(st >= n-1){
		return ans;
	}
	if(v[a[st]].size() > 1 && color[a[st]] != 1){
		int l = v[a[st]].size();
		color[a[st]] = 1;
		int ans1 = solve(v[a[st]][l-1], 0) + (l-1);	
		int ans2 = solve(st+1, 0)+1;
		dp[st] = min(ans1, ans2);
	} else{
		color[a[st]] = 1;
		int ans2 = solve(st+1, 0) + 1;
		dp[st] = ans2;
	}
	return dp[st];	
}
int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i=0;i<M;i++){
			v[i].clear();
			dp[i] = -1;
		}
		for(int i=0; i<n;i++){
			cin >> a[i];
		}
		for(int i=0; i <n;i++){
			color[a[i]] = 0;
			v[a[i]].push_back(i);
		}
		int st = 0, ans=0;		
		int ans1 = solve(st, ans);
		cout << ans1 << endl;
		for(int i=0;i<n;i++){
			cout << dp[i] << " ";
		}
	}	
	return 0;
}
