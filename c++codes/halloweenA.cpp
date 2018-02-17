#include <bits/stdc++.h>
using namespace std;
int n, m, total, a[1000006][6], area;

int dist(int x1, int y1, int x2, int y2){
	return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}

int calc(int n){
	int s[3];
	s[0] = dist(a[n][0], a[n][1], a[n][2], a[n][3]);
	s[1] = dist(a[n][0], a[n][1], a[n][2], a[n][3]);
	s[2] = dist(a[n][0], a[n][1], a[n][2], a[n][3]);

	int ar = 0;
//	if(s[0] == s[1] && (2*s[0]*s[0] == s[2]*s[2]) ){
//		ar = (s[0]*s[0]);
//	} else if(s[1] == s[2] && (2*s[2]*s[2] == s[0]*s[0]) ){
//		ar = (s[1]*s[1]);
//	}else if(s[0] == s[2] && (2*s[0]*s[0] == s[1]*s[1]) ){	 		
//		ar = (s[0]*s[0]);
//	} else{
//		ar = 0;
//	}
	if(s[0] == s[1]  ){
		ar = (s[0]*s[0]);
	} else if(s[1] == s[2] ){
		ar = (s[1]*s[1]);
	}else if(s[0] == s[2] ){	 		
		ar = (s[0]*s[0]);
	} else{
		ar = 0;
	}
	
	return ar;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> m;
		for(int i = 0; i < m; i++){
			for(int j = 0; j < 6; j++){
				cin >> a[i][j];
			}	
		}
		total = n*n;
		for(int i = 0; i < m; i++){
			int area = calc(i); 
			total -= area;
			if(area == 0){
				total = -1;
			}
		}
		if(total == 0){
			cout << "YES\n";
		}else{
			cout << "NO\n";		
		}					
	}
	return 0;
}
