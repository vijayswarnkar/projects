#include <bits/stdc++.h>

using namespace std;
/*
cdabcadb
a
b
*/

int main() {
    string s,a,b;
    cin >> s >> a >> b;
    int l = (int)a.size();
    int t = 0,    pos_a = 0,    pos_b = 0,	idxs = 0;    
    while(1){
        pos_a = s.find(a,idxs);
        pos_b = s.find(b,idxs);
        if((pos_a < pos_b && pos_a != -1  && pos_b != -1)|| (pos_a >= 0 && pos_b == -1)){
            s.replace(pos_a, l, b);
            idxs = pos_a+l;
        }
        else if((pos_b < pos_a && pos_b != -1  && pos_a != -1)|| (pos_b >= 0 && pos_a == -1)){
        	s.replace(pos_b, l, a);
            idxs = pos_b+l;
        }
        else if(pos_a == -1 && pos_b == -1){
            break;
        } else {
        	break;
		}
  //      cout << s << pos_a << pos_b << idxs << endl;
//        break;
//        if(t++ >= 5) break;
    }
    cout << s << endl;
    return 0;
}
