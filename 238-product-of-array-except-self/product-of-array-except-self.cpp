class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> suff(n, 1);
        int l = nums[0];

        for(int i=n-2; i>=0; i--){
            suff[i] = suff[i+1]*nums[i+1];
        }

        for(int i=1; i<n; i++){
            int mul = l*suff[i];
            suff[i] = mul;
            l *= nums[i];
        }
        return suff;
    }
};