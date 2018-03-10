#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_set<int> umap;
        umap.insert(0);
        int sum = 0, c=0;
        int mn = 99999;
        // for(int i=0; i<nums.size(); i++){
        //     cout << nums[i] << ",";
        // }cout << "::" << k << endl;
        for(int i=0; i<nums.size(); i++){
            sum += nums[i];
            int x = sum-k;           
            int flag = 0;
            if(k != 0){
                flag = (nums[i] > 0 && (nums[i] %k == 0));
            }
            if(umap.count(x) || flag){
                c++;
            }
            umap.insert(sum);
        }
        return c;
    }    
};int main(){
	int arr[] = {1,2,3,4,5,6,7,1,23,21,3,1,2,1,1,1,1,1,12,2,3,2,3,2,2}
	int k = 6;
	vector<int> v(arr);
	Solution obj = new Solution();
	cout << Solution.subarraySum(v, k) << endl;
}