#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cout << "input :";
	cin >> t;
	while(t--){
		int n, a[100005];
		cin >> n;
		for(int i=0; i < n; i++){
			scanf("%d", &a[i]);
		}

		int gans = 0;
		for(int i=0; i < n;i++){
			int ans = a[i];
			int prev = ans;
			for(int j=i+1; j <n; j++){
				prev = (prev & a[j]);
				ans += prev;
			}
			cout << ans << ", ";
			gans += ans;
		}
		cout << gans << endl;

	}	
	return 0;
}