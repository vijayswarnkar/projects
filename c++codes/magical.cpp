#include <bits/stdc++.h>
#define MAX 1000005
using namespace std;
typedef  int lli;
lli n, a[MAX], l[MAX], r[MAX];

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while(t--){
		lli pos, val;
		cin >> n;		
		for(int i=0; i < n; i++){
			scanf("%d", &a[i]);
		}
		if(n <= 2){
			cout << 0 << endl;
			
		} else {
			l[0] = a[0];
			for(int i=1; i < n; i++){
				l[i] = max(a[i], l[i-1]);
			}
			r[n-1] = a[n-1];
			for(int i=n-2; i >= 0; i--){
				r[i] = min(a[i], r[i+1]);
			}
			int c = 0;
			for(int i = 1;i <= n-2; i++){
	//			cout << i << ":" << l[i-1] << ", " << a[i] << ", " << r[i+1] << endl;
				if(a[i] >= l[i-1] && a[i] <= r[i+1]){
					c++;
				}
			}		
			cout << c << endl;			
		}
	}	
	return 0;
}
