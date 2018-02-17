#include <bits/stdc++.h>

using namespace std;

void comb(char x, char y, string &st){
	string ch;
	if(x == y) {
		st += x; st += x;
	}
	if(x=='a' && y=='b') ch =  'c';	
	else if(x=='b' && y=='a') ch =  'c';	
	else if(x=='a' && y=='c') ch =  'b';	
	else if(x=='c' && y=='a') ch =  'b';	
	else if(x=='c' && y=='b') ch =  'a';	
	else if(x=='b' && y=='c') ch =  'a';	
	else ch = "";
	st += ch;
}
/*
1
abcc
*/
void solve(){
	int t;	
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		queue<string> q;
		map<string, int> mp;
		q.push(s);
		mp[s] = 1;
		int ans = 99999;
		while(!q.empty()){
			string st = q.front();
//			cout << st << endl;
			q.pop();
			for(int i=0; i < st.size()-1; i++){
				string tmp = st.substr(0,i);
				comb(st[i], st[i+1], tmp);
				tmp += st.substr(i+2, st.size()-1-i-2+1);
//				cout << "i: " << i << ", tmp = " << tmp << "\n";
//				for(int j=i+2; j < st.size(); j++) {
//					tmp += st[j];	
//				}
				if(!(mp.count(tmp) > 0)){
					q.push(tmp);
					mp[tmp] = 1;					
				}
				ans = min(ans, (int)tmp.size());
			}
		}	
		cout << ans << endl;
	}
}

int main(){
	solve();
	return 0;
}
