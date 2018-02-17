#include <bits/stdc++.h>

using namespace std;
int t;
/*
1
3 2
B T B F C T
B T C F D F

1
1 3
A F
B F
C F
*/
int main(){
	scanf("%d", &t);
	while(t--){
		int qa[104][4];
		int qans[104];
		memset(qa, 0, sizeof(qa));
		memset(qans, 0, sizeof(qans));
		int q, m;
		scanf("%d %d", &q, &m);
		for(int i = 0; i < m; i++){
			for(int j = 0; j  < q; j++){
				char x, y;
				cin >> x >> y;
				if( y == 'T'){
					qa[j][x-'A'] = 1;												
					qans[j] = x-'A'+ 1;
				} else {
					qa[j][x-'A'] = -1;												
				}
			}
		}		
//		cout << "--map--\n";
//		for(int i = 0; i < q; i++){
//			for(int j=0; j < 4; j++){
//				cout << qa[i][j] << " ";
//			}cout << endl;
//		}
//		cout << "------\n";
		for(int i = 0; i < q; i++){
			if(qans[i] > 0){
				cout << (char)(qans[i]-1+'A') << " ";								
			} else {
				int ct = 0;
				int ans = -1;
				for(int j = 0; j < 4; j++){
					if(qa[i][j] == 0){
						ct++;
						ans = j;
					}
				}
				if(ct == 1){
					cout << (char)(ans+'A') << " ";					
				}	else {
					cout << '?' << " ";				
				}			
			}
		}
		cout << endl;
	}
	return 0;
}
