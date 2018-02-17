#include <bits/stdc++.h>

using namespace std;
int n;
int a[1000];
int t;

int main(){
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		int mx = 0;
		for(int i=0; i < n; i++) scanf("%d", &a[i]);

		for(int i=0; i < n; i++) {
			for(int j=i+1; j < n; j++){
				int x = a[i]^a[j];
				int count = __builtin_popcount(x);
				mx = (count > mx  ? count : mx);
			}			
		}
		printf("%d\n", mx);
	}
	return 0;
}
