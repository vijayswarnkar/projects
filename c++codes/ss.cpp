#include <bits/stdc++.h>

using namespace std;

string comb(char x, char y){
	string ch;
	if(x == y) {
		char ch[2];
		ch[0] = x;
		ch[1] = y;
//		cout << x << y << "ch = " << ch << endl;
		return string(ch);	
	}
	if(x=='a' && y=='b') ch =  'c';	
	else if(x=='b' && y=='a') ch =  'c';	
	else if(x=='a' && y=='c') ch =  'b';	
	else if(x=='c' && y=='a') ch =  'b';	
	else if(x=='c' && y=='b') ch =  'a';	
	else if(x=='b' && y=='c') ch =  'a';	
	else ch = "";
	return string(ch);
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
		int ctr = 0;
		while(!q.empty()){
			string st = q.front();
			q.pop();
			for(int i=0; i < st.size()-1; i++){
				string tmp="";
				for(int j=0; j < i; j++) tmp += (st[j]);
//				cout << i << ", "<<tmp << " ,";
				tmp += comb(st[i], st[i+1]);
//				cout << tmp << " ,";				
				for(int j=i+2; j < st.size(); j++) {
					cout << "\n i:"<<i << ", j:" << j << "st[j] :" << st[j] << endl;
					tmp += st[j];	
				}
//				cout << tmp << " ,";
//								
				cout << "st:" << tmp;
				cout << mp[tmp] << ",";
				if(mp[tmp] == 1){
					q.push(tmp);
					mp[tmp] = 1;					
				}
//				ans = min(ans, (int)tmp.size());
				cout << "st:" << tmp<<endl;
			}
			break;
		}	
		cout << ans << endl;
	}
}

int main(){
//	cout << comb('a','a');
	solve();
	return 0;
}
