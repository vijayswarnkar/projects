#include <bits/stdc++.h>
#define MAX 100005
#define BITS 4
using namespace std;
typedef long long int lli;

int main(int argc, char const *argv[])
{
	int t;
	t = 1;
	// cin >> t;
	while(t--){
		int n;
		int a[MAX] = {7,9,11};
		int b[BITS][MAX];
		// cin >> n;
		n = 3;
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		for(int i=0;i<BITS;i++){
			for(int j=0;j<n;j++){
				b[i][j] = -1;
				cout << b[i][j] << " ";
			}
			cout << endl;
		}

	}	
	return 0;
}