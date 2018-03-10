#include <bits/stdc++.h>

using namespace std;

int main(){
	float k, d, t, ans;
	cin >> k >> d >> t;
	if(1 || k > d){
		float x = ((2.0*d)-k);
		int y = t / x;
		cout << x << ", " << y << endl;
		ans = (x*y) + (t-(x*y)); 
	} else{
		float x = k + (d-k)/(float)2;
		int y = t / x;
		ans = (x*y) + (t-(x*y)); 
	}
	cout << ans << endl;
	return 0;
}