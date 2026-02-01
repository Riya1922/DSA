class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int sum = nums[0];
        int n = nums.size();
        //first shortest
        int mini = 50;
        //second shortest
        int sec_mini = 50;

       for(int i=1; i<n; i++){
        if(nums[i] < mini){
            sec_mini = mini;
            mini = nums[i];
            
        }
        else if(nums[i]==mini){
            sec_mini = nums[i];
        }
        else sec_mini = min(sec_mini, nums[i]);
       }
      return sum + mini + sec_mini;
    }
};