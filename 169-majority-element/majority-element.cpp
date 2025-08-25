class Solution {
public:
//Riya Malik
    int majorityElement(vector<int>& nums) {
        //step 1: Apply Moore's Voting Algorithm
       int n = nums.size();
       int cnt=0, ele;
       for(int i=0; i<n; i++){
           if(cnt==0){
              cnt = 1;
              ele = nums[i];
           }
           else if(nums[i]==ele) cnt++;
           else cnt--;
       }

       //step 2: verify if the ele is majority ele or not
       int cnt2=0;
       for(int i=0; i<n; i++){
        if(nums[i]==ele) cnt2++;
       }

       if(cnt2 > n/2) return ele;
       else return -1;
    }
};