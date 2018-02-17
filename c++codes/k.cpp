/*

3 3
P..
\/\
...

*/
#include <bits/stdc++.h>
using namespace std;
int n,m,  row, col;
char a[105][105];
bool vis[105][105];
int ans = -2;

bool outside(int row, int col){
	if(row >= 0 && row < n && col >= 0 && col < m) return false;
	else return true;
}

void solve(int row, int col){
//	cout << row << "," << col << endl;
	if(vis[row][col] == true || outside(row, col) || ans != -2) return;
	if(row == n-1){
		if(a[row][col] == '.') ans = col;
		else ans = -2;
		return;
	}
	vis[row][col] = true;
	if(a[row+1][col] == '/'){
		solve(row, col-1);
	}else if(a[row+1][col] == '.'){
		solve(row+1, col);		
	} else{
		solve(row, col+1);
	}
}	
int main(){
		
	cin >> n >> m;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> a[i][j];			
			if(a[i][j] == 'P'){
				row = i, col = j;
			}

		}
	}	
	
	solve(row, col);
	cout << ans+1;
	return 0;
}
