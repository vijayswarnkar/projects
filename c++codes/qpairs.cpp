#include <bits/stdc++.h>
#define M 100005
using namespace std;

pair<int, int> A[M], B[M], Q[M];
int n,q, x;

void disp(pair<int,int> p[], int sz){
	cout << "---------------\n";
	for(int i =0; i < sz; i++){
		cout << p[i].first << "," << p[i].second << endl;
	}
}

int flag = 0;
int ele;

void solve(int s, int e, int s1, int e1, int i){
	int mid = (s+e)/2;
	int mid1 = (s1+e1)/2;		
	if(A[mid].first >= ele && B[mid1].first >= ele)
		solve(s, mid, s1, mid1, i);
	if(A[mid].first >= ele && B[mid1].first < ele)
		solve(s, e, s1, mid1, i);
		
}

int main(){
	cin >> n >> q;
	for(int i = 0; i < n; i++){
		cin >> A[i].first;
		A[i].second = i;
	}	
	
	for(int i = 0; i < n; i++){
		cin >> B[i].first;
		B[i].second = i;
	}

	for(int i = 0; i < n; i++){
		cin >> Q[i].first >> Q[i].second;
	}	
	
	sort(A, A+n);
	sort(B, B+n);
	disp(A,n);
	disp(B,n);		

	for(int i = 0; i < n; i++){
		solve(0, n-1, i);			
	}	
	return 0;
}
