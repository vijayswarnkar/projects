#include <bits/stdc++.h>

using namespace std;
int t,n,k,A[100005], C[10], countD[20];
	int ans[13];

/*
1
10 2
5 4 2 1 5 3 2 5 1 3
-2 2
*/
void printCount(){
	for(int i=1; i <= 2*k+2; i++){
		cout << countD[i] << " ";
	}cout << endl;
}

int findMatch(int st, int end){
	int vis[13]; 
	int allDim[13];
	for(int i=1;i<= 2*k+2; i++) {
		vis[i]=0;	
		allDim[i] = 0;
	}
	ans[0] = st;
	ans[1] = end;
	
	vis[st] = vis[end] = 1;
	for(int dim = 1; dim <= k; dim++){
//		cout << "for dim : " << dim << endl;
		for(int i=1; i <= 2*k+2; i++){
			if(!vis[i]){
				for(int j=1; j <= 2*k+2; j++){
					if(!vis[j] && i != j){
//						cout << i << "," << j << endl;
//						if(abs(abs(countD[i])-abs(countD[j])) == abs(C[dim])){
						if(countD[i]-countD[j] == C[dim]){
							ans[2*dim] = i;
							ans[2*dim+2] = j;							
							vis[i] = vis[j] = 1;
							allDim[dim] = 1;
//							cout<< "Match for dim : " << dim  << " = " << i << "," << j << endl;
							goto xy;
						}
						else if(countD[j]-countD[i] == C[dim]){
							ans[2*dim] = j;
							ans[2*dim+2] = i;							
							vis[i] = vis[j] = 1;
							allDim[dim] = 1;
//							cout<< "Match for dim : " << dim  << " = " << i << "," << j << endl;
							goto xy;
						}
					}		
				}
			}
		}
		xy:
		if(allDim[dim] == 0){
//			cout << "Cant find match for dim : "<< dim << endl;			
			return 0;
		}		
	}
//	cout << "Possible\n";
//	for(int i=0; i < 2*k+2; i++){
//		cout << ans[i] << " ";
//	}cout << endl;
	
	return 1;
}
int getEffectiveCount(int st, int end){
//	cout << st << "," << end << endl;
	for(int i = 1; i <= 2*k+2; i++)
		countD[i] = 0;
	bool move = false;
	for(int i=0; i < n; i++){
		if(A[i] == st) move = true;
		else if(A[i] == end) move = false;
		else{
			if(move == true){
				countD[A[i]]++;				
			}
		}
	}
//	printCount();
	return findMatch(st, end);
}
int main(){
	cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i=0;i<n;i++)cin >> A[i];
		for(int i=1;i<=k;i++)cin >> C[i];
		
//		getEffectiveCount(2,3);					
		for(int i=1; i <= 2*k+2; i++){
			for(int j=1; j<=2*k+2; j++){
				if(i != j){
					int result = getEffectiveCount(i,j);					
					if(result == 1){
						int allD[10];
						for(int i=1; i <= 2*k+2; i++) allD[i] = 0;
						for(int i=0; i < k+2; i++){
							if(ans[i] == 0){
								for(int i=1; i <= 2*k+2; i++){
									if(allD[i] == 0){
										allD[i] = 1;
										cout << i << " ";
									}
								}

							} else {
								cout << ans[i] << " ";								
								allD[ans[i]] = 1;
							}
						}cout << endl;						
						goto abc;
					}
				}
			}
		}
		cout <<"Stupid Fish\n";
		abc:{}
	}	
	return 0;
}
