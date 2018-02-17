#include <bits/stdc++.h>

using namespace std;
string s;	
int n;
vector<pair<int,int> > vp;
pair<int,int> p;

void print(vector<pair<int,int> > vp){
	for(int i=0; i < vp.size(); i++){
		cout << vp[i].first << "," << vp[i].second << endl;
	}
}

void push(string s){
	int dir = 0;
	for(int i=0;i<s.size();i++){
		if(s[i] == 'F'){
			
		}
		if(s[i] == 'L'){
			
		}
		if(s[i] == 'R'){
			
		}
	}
}
int main(){
	cin >> s;
	n = s.size();
	vp.push_back(make_pair(0,0));
	push(s);
	print(vp);
	return 0;
}
