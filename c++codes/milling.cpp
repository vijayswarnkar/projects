#include <bits/stdc++.h>
using namespace std;
int w, s, x, y;
int arr[10005][105];
int m[10][105];
	
void calc(int node, int mill){
//	for(int i = 0; i < x; i++)cout << arr[node][i] << " ";cout << endl;
//	for(int i = 0; i < x; i++)cout << m[mill][i] << " "; cout << endl;
	for(int i = 0; i < x; i++){
		if( arr[node][i] + m[mill][i] > y){
			int diff = arr[node][i] + m[mill][i] - y;
			arr[node][i] -= diff;		
		}
	}
//	for(int i = 0; i < x; i++)cout << arr[node][i] << " ";cout << endl;
}	

int main(){
	scanf("%d %d", &w, &s);
	scanf("%d %d", &x, &y);
	for(int i = 0; i < w; i++){
		for(int j = 0; j < x; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	for(int i = 0; i < 1; i++){
		for(int j = 0; j < x; j++){			
			scanf("%d", &m[0][j]);
		}
	}	
	for(int i = 0; i < s-1; i++){
		for(int j = 0; j < x; j++){					
			int z;
			scanf("%d", &z);
			m[0][j] = max(z, m[0][j]);			
		}
	}	
	for(int i = 0; i < w; i++){
		for(int j = 0; j < 1; j++){
			calc(i,j);	
		}
//		cout << "ans:\n";
		for(int j = 0; j < x; j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}
	return 0;
}
