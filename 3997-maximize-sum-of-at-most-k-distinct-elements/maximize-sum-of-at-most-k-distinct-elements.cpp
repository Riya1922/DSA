class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
          vector<int> ans;
        for(int i=n-1; i>=0; i--){
            if(i==n-1){
                  ans.push_back(nums[i]);
                k--;
                continue;
            }
            else if(k>0 && ans.back()!=nums[i]){
                ans.push_back(nums[i]);
                k--;
             }
        }
        return ans;
    }
};