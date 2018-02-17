#include <bits/stdc++.h>
using namespace std;

int main(){

	long long n,h;
	cin >> n >> h;
	long long int st = (h+1)*(h+1);

	vector<long long int> f1, f2;
	f2.push_back(st);
//	cout << st << " ";
	long long int inc = h+1;
	while(1){
		if(st+inc > n) break;
		f1.push_back(st+inc);
//		cout << st+inc << " ";
		st += inc;				
		if(st+inc > n) break;
		f2.push_back(st+inc);
//		cout << st+inc << " ";		
		st += inc;				
		inc++;
	}	
	for(long long int i = 0; i < f1.size(); i++){
		printf("%lld ", f1[f1.size()-1-i]);
	}
	for(long long int i = 0; i < f2.size(); i++){
		printf("%lld ", f2[i]);
	}
	return 0;
}

