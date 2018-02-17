#include <bits/stdc++.h>
#define MAX 100005
#define BITS 6
using namespace std;
typedef long long int lli;
int b[BITS][MAX];

int main(int argc, char const *argv[])
{
	int t;
	t = 1;
	// cin >> t;
	while(t--){
		int n;
		int a[MAX] = {7,7,15};
		// cin >> n;
		n = 3;
		for(int i=0;i<n;i++){
//			cin >> a[i];
		}
//		for(int i = 0; i < BITS; i++){
//			for(int j = 0; j < n; j++){
//				b[i][j] = ((int)(pow(2,i)) & a[j]) ? 1 : 0;
//			}
//		}

		for(int i = 0; i < n; i++){
			for(int j = 0; j < BITS; j++){
				cout << b[i][j] << " ";
			}
			cout << endl;
		}

	}	
	return 0;
}
