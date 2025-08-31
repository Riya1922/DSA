class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
         int n = nums.size();

         int l=0, r=0, minlen=INT_MAX, sum=0;

         while(l<n){
            sum += nums[l];

            while(sum>=target){
                minlen = min(minlen, l-r+1);
                sum -= nums[r];
                r++;
            }
            l++;
         }
         if(minlen==INT_MAX) return 0;
         return minlen;
    }
};