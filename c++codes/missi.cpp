#include <bits/stdc++.h>
#define F(i,s,e) for(int i =s; i < e; i++)
#define D(i,s,e) for(int i =s; i >= e; i--)
#define P(x) cout<<x;
#define I(x) cin>>x;
#define nl cout<<endl;
#define sp cout<<" ";
#define spl sp;nl;
#define MOD 1000000007
#define MAX 100005
#define mp make_pair
#define pb push_back
#define PP pair<int, int>
#define _ ios_base::sync_with_stdio(0);
#define PV(v) F(z,0,(v).size()){P((v)[z]);sp;}nl;
using namespace std;
typedef long long int LL;
typedef pair<int,int> pii;
int a[100005], b[100005];

int main(){ _
	int t;
	I(t);
	while(t--){
		int n,m;
		I(n);I(m);
		F(i,1,n+1){
			I(a[i]);
			b[a[i]] = i;
		}
		F(i,1,n){P(a[i]);sp;}nl;
		F(i,1,n){P(b[i]);sp;}nl;
	}

    return 0;
}

