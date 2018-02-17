#include <bits/stdc++.h>
#define M 26
using namespace std;
typedef  long long int lli;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while(t--){
		int n,m,a=0,b=0;
		char x;
		cin >> n >> m;
		for(int i=0;i <n; i++){
			for(int j=0; j <m; j++){
				cin >> x;
				if(i ==0 || j ==0 || i == n-1 || j == m-1){					
					if(x == '0')
						a++;
				} else{
					if(x == '1')
						b++;
				}
			}
		}
						if(a <= b){
					cout << a << endl;
				} else{
					cout << -1 << endl;
				}

	}	
	return 0;
}
