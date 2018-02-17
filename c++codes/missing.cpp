#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while(t--){
		lli n, a[1005], m;
		lli pos, val;
		cin >> n >> m;
		for(int i=0; i < n; i++){
			cin >> a[i];
			if(a[i] >= 0){
				pos = i;
				val = a[i];
			}
		}
		for(int i=pos+1; i < n; i++){
			a[i] = (a[i-1]+1) % m;
		}
		for(int i=pos-1; i >= 0; i--){
			a[i] = (a[i+1]-1);
			if(a[i] < 0){
				a[i] += m;
			}
		}
		for(int i=0; i < n; i++){
			cout << a[i] << endl;
		}

	}	
	return 0;
}