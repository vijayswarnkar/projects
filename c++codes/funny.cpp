#include <bits/stdc++.h>

using namespace std;
int n, m;
int a[205][205];
int ans[205*205][2];
bool vis[205][205];


void printS(stack<pair<int, int> > S){
	for(int i = 0;i  < S.size(); i++){
		pair<int, int> p = S.top();
		cout << p.first << "," << p.second << endl;
	}cout << "-------->>>>>>>>>>>\n";
}
int main(){
	
	stack<pair<int, int> > S;
	cin >> n >> m;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> a[i][j];
			if(a[i][j] == 1){
				S.push(make_pair(i,j));
			}
		}
	}
	int side[4][2] ={
		{1,0},{0,1},{-1,0},{0,-1}
	}; 
	int ct = 0;
//	cout << "----------------------\n";
	while(!S.empty()){
//		printS(S);
		pair<int, int> p = S.top();		
		S.pop();
		if(a[p.first][p.second] == 0){
			continue;	
		}
//		cout << p.first << " " << p.second << endl;
		ans[ct][0] = p.first;
		ans[ct][1] = p.second;
		ct++;
		
		a[p.first][p.second] = 0;
		vis[p.first][p.second] = true;
		for(int i = 0; i < 4; i++){
			int x = p.first+side[i][0];
			int y = p.second+side[i][1];
			if(x >= 0 && x < n && y >= 0 && y < m && vis[x][y] == false && a[x][y] != 0){
				a[x][y]--;				
				if(a[x][y] == 1)
					S.push(make_pair(x,y));
			}
		}		
	}
	
	if(ct != m*n){
		cout << "No solution\n";
	}else{
//		cout  << " : Possible\n";
		for(int i = 0; i < n*m; i++){
			cout << ans[n*m-1-i][0]+1 << " " <<  ans[n*m-1-i][1]+1 << endl;
		}
	}
	return 0;
}
