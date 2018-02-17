#include <bits/stdc++.h>

using namespace std;
/*
cdabcadb
a
b
ababacaba
*/

void A(string s, int a[]){
	
}

void B(string s, int b[]){
	
}

void print(char str[], int l){
	for(int i =0; i < l; i++){
		cout << str[i] << ", ";
	} cout << endl;
}
void print(int str[], int l){
	for(int i =0; i < l; i++){
		cout << str[i] << ", ";
	} cout << endl;
}
int main() {
	int b[] = {0, 0, 3, 0, 1, 0};
	int l = 6;

	print(b, l);
	char str[l+1];
	str[0] = 'a';
	for(int i=1;i<l;i++){
		str[i] = (b[i] > 0 ? 'a' : ' '); 		
	}
	print(str, l);
	for(int i = 0; i < 5; i++){
	}
	
    return 0;
}
