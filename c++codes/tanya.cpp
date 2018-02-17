#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int final = 99999;
		for(int i=0; i < s.size(); i++){
			int ans = 0;
			for(int j = 0; j < i; j++){
				if(s[j] == 'N') {
					ans++;	
				}
			}
			for(int j = i; j < s.size(); j++){
				if(s[j] == 'O') {
					ans++;	
				}
			}
			final = min(final, ans);
		}
		cout << final << endl;
	}
	return 0;
}
