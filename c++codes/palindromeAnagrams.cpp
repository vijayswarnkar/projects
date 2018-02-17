#include <bits/stdc++.h>
#define M 26
using namespace std;
typedef  long long int lli;

int main(int argc, char const *argv[])
{
	lli fact[21];
	fact[0] = 1;
	fact[1] = 1;
	for(int i=2; i < 21; i++){
		fact[i] = fact[i-1]*i;
	}
	int t;
	cin >> t;
	while(t--){
		string s;
		int n;
		int C[M];
		for(int i=0;i<M;i++){
			C[i] = 0;
		}
		cin >> n;
		cin >> s;
		for(int i = 0; i < n; i++){
			C[s[i]-'a']++;			
		}
		int odd = 0;
		for(int i=0; i<M;i++){
			if(C[i] % 2 == 1){
				odd++;
			}
		}

				
		if((n %2 == 1 && odd == 1) || (n %2 == 0 && odd == 0)){
			int l = (n/2);
			lli num = fact[l];
			lli deno = 1;
			for(int i=0; i < M; i++){
				deno *= fact[C[i]/2];
			}
			int ans= num/deno;
			cout << ans << endl;			
		}else{
			cout << 0 << endl;							
		}			
	}	
	return 0;
}
