#include <bits/stdc++.h>
#define MAX 1000005
using namespace std;
typedef long long int lli;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while(t--){
		lli n, a[MAX], l[MAX], r[MAX];
		lli pos, val;
		cin >> n;
		for(int i=0; i < n; i++){
			cin >> a[i];
		}
		
		l[0] = a[0];
		lli mx = a[0];
		for(int i=1; i < n; i++){
			l[i] = max(l[i], mx);
		}
		r[n-1] = a[n-1];
		lli mn = a[n-1];
		for(int i=n-2; i >= 0; i--){
			r[i] = min(r[i], mn);
		}
		int c = 0;
		for(int i = 1;i < n-1; i++){
			if(a[i] > l[i-1] && a[i] < r[i+1]){
				c++;
			}
		}		
		cout << c << endl;
	}	
	return 0;
}
