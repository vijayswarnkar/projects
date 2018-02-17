#include <bits/stdc++.h>
using namespace std;
int cR[20][20];
int cL[20][20];
int cU[20][20];
int cD[20][20];
int n, m;
char a[20][20];
struct st{
	int i,j,area,l;
};
vector<st> v;
void print(int arr[20][20]){
	cout <<endl << endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<arr[i][j];
		}
		cout<<endl;
	}
}	
void cr(){
	for(int i=0; i<n;i++){
		cR[i][0] = (a[i][0]=='G')?1:0;		
		for(int j=1;j<m;j++){
			if(a[i][j] == 'G'){
				cR[i][j] += cR[i][j-1]+1;
			}
		}
	}
}
void cu(){
	for(int j=0; j<m;j++){
		cU[0][j] = (a[0][j]=='G')?1:0;		
		for(int i=1;i<n;i++){
			if(a[i][j] == 'G'){
				cU[i][j] += cU[i-1][j]+1;
			}
		}
	}
}
void cd(){
	for(int j=0; j<m;j++){
		cD[n-1][j] = (a[0][j]=='G')?1:0;		
		for(int i=n-2;i>=0;i--){
			if(a[i][j] == 'G'){
				cD[i][j] += cD[i+1][j]+1;
			}
		}
	}
}
void cl(){
	for(int i=0; i<n;i++){
		cL[i][m-1] = (a[i][m-1]=='G')?1:0;		
		for(int j=m-2;j>=0;j--){
			if(a[i][j] == 'G'){
				cL[i][j] += cL[i][j+1]+1;
			}
		}
	}
}

void getMax(){
	for(int i=0; i < n; i++){
		for(int j=0; j < m;j++){
			st obj;
			int area;
			int mn1 = min(cR[i][j], cL[i][j]);
			int mn2 = min(cU[i][j], cD[i][j]);
			int mn = min(mn1,mn2);
			if(mn == 1)
				area = 1;
			else
				area = mn*mn + 1;
			obj.area = area;
			obj.i = i;
			obj.j = j;
			obj.l = mn; 
			v.push_back(area);
		}
	}
	sort(v.begin(), v.end());
	cout << v[v.size()-1] * v[v.size()-2] << endl;
}
int main() {
	cin>>n>>m;
	for(int i=0;i<n; i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	cr();	cl();	cu();	cd();
	getMax();
	return 0;
}
