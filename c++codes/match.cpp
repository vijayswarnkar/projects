#include <bits/stdc++.h>

using namespace std;
int findMatchingPair(string input) {
    if(input.size() > 1 && input[0] >= 'A' && input[0] <= 'Z'){
        stack<char> s;
        s.push(input[0]);
        int i = 1;
        int lastM = -1;
        while(!s.empty() || i < input.size()){
            if(input[i] >= 'a' && input[i] <= 'z'){
            	if(s.size() > 0){
            		
                char last = s.top();
                s.pop(); 
                char now = input[i]-32;
				cout << last << ", "<< now << endl;               
                if(last == now){
                    lastM = i;
                } else{
                    break;
                }
            }
            } else {
                s.push(input[i]);
            }
            i++;
        }
        return lastM;
    } else {
        return -1;
    }
}

int main(){
	string s = "YVvyGSAJjJjjaWwsg";
	cout <<	findMatchingPair(s)<< endl;
}
