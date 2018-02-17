#include <bits/stdc++.h>
using namespace std;
int a[104][104];
int vis[104][104];
int n,m;

int base6(int n){
	vector<int> base6;
	while(n){
		base6.push_back(n%6);
		n /= 6;
	}
	int f = 1;
	for(int i = 0; i < base6.size(); i++){
		n += (f)*base6[i];
		f *= 10;
	}
	return n;
}
int base6zero(int n){
	vector<int> base6;
	while(n){
		base6.push_back(n%6);
		n /= 6;
	}
	int f = 0;
	for(int i = 0; i < base6.size(); i++){
		if(base6[i] == 0) f++;
		else break;
	}
	return f;
}
/*
2
3 3
3 2 3
2 3 2
3 2 3
3 3
3 2 3
2 3 2
3 2 3
*/
int solve(int x, int y, int ct){
	if(vis[x][y] != -1){
		return vis[x][y];
	}
	if(ct >= n+m-1){
		return a[x][y];
	}	
	if(x+1 < n && y+1 < m){
		int a1 = a[x][y]*solve(x+1, y, ct+1);
		int a2 = a[x][y]*solve(x, y+1, ct+1);
		int b1 = base6zero(a1);
		int b2 = base6zero(a2);
		
		if(b1 > b2)	{
			vis[x][y] = a1;
			return a1;
		}	
		else {
			vis[x][y] = a2;
			return a2;
		}
	}
	else if(x+1 < n){
		vis[x][y] = a[x][y]*solve(x+1, y, ct+1);
		return vis[x][y];
	}	
	else if(y+1 < m){
		vis[x][y] = a[x][y]*solve(x, y+1, ct+1);
		return vis[x][y];
	}	
}

int solve1(){
	vis[0][0] = a[0][0];
	for(int i = 1; i < n; i++){
		vis[i][0] = vis[i-1][0] * a[i][0];
	}
	for(int j = 1; j < m; j++){
		vis[0][j] = vis[0][j-1] * a[0][j];
	}
	for(int x=1; x < n; x++){
		for(int y=1; y < m ; y++){
			int a1 = a[x][y]*vis[x-1][y];
			int a2 = a[x][y]*vis[x][y-1];
			int b1 = base6zero(a1);			
			int b2 = base6zero(a2);			
			if(b1 > b2)	{
				vis[x][y] = a1;
			}else {
				vis[x][y] = a2;
			}
		}
	}
	return vis[n-1][m-1];
}
int main(){
	int t;
	cin >> t;
	while(t--){
		memset(vis, -1, sizeof(vis));
		cin >> n >> m;
		for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) cin >> a[i][j];
//		int ans = solve(0, 0, 1);
		int ans = solve1();
//		cout << ans  << endl;
		cout << base6zero(ans) << endl;
	}	
	return 0;
}
