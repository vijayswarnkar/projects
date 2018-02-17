#include <bits/stdc++.h>
#define MAX 100005
#define BITS 25
using namespace std;
typedef long long int lli;
int b[MAX][BITS];
int c[MAX][BITS];
int a[MAX];
lli bit[BITS];
int main(int argc, char const *argv[])
{
	int t;
//	scanf("%d", &t);
	cin >> t;
	bit[0] = 1;
	for(int i=1;i<BITS;i++){
    	bit[i] = 2*bit[i-1];
	}
	while(t--){
		int n;
		scanf("%d", &n);
		for(int i=0;i<n;i++){
			scanf("%d", &a[i]);
		}
		for(int i = 0; i < BITS; i++){
			for(int j = 0; j < n; j++){
			    int bitNo = bit[i];
				int x = bitNo & a[j];
				b[j][i] = (x > 0) ? 1 : 0;
			}
		}

		lli ans = 0;
		for(int i = n-1; i >= 0; i--){
			for(int j = 0; j < BITS; j++){
				if(b[i][j] == 0){
					c[i][j] = 0; 
				} else {					
					c[i][j] = (i+1 >= n) ? 1 : c[i+1][j]+1;	
				}
			    lli bitNo = bit[j];
				lli val = bitNo*c[i][j];
				ans += val;
			}
		}
		cout << ans << endl;
	//	printf("%ld\n", ans);
	}	
	return 0;
}
