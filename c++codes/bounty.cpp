#include <bits/stdc++.h>
#define M 1011
using namespace std;
int n;
vector<int> v[M];
int a[M][M];
int vis[M];
int in[M];
int ans = 0;

int calc(int node){
	for(int i = 0; i < v[node].size(); i++){
		int nextNode = v[node][i];
		if( !vis[nextNode] ){
			vis[nextNode] = 1;
			in[nextNode] = 1;
			calc(nextNode);			
			break;
		}
		else if( in[nextNode] == 0){
			ans--;
			in[nextNode] = 1;
			break;				
		}
	}
}

int main(){
	cin >> n;
	for(int i=0; i < n; i++){
		int k;
		cin >> k;
		for(int j = 0; j < k; j++){
			int x;
			cin >> x;
			v[i].push_back(x);
		}
	}	 
//	cout << "vj\n";
//	for(int i = 0; i < n; i++){		for(int j = 0; j < v[i].size(); j++){			cout << v[i][j];		} cout << endl;	}
	for(int i = 0; i < n; i++){
		if(!vis[i])	{
			ans++;
			vis[i] = 1;
			calc(i);
		}	
	} 
	cout << ans << endl;	
	return 0;
}
