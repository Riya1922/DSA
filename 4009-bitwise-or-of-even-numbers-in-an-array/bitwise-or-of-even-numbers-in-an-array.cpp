class Solution {
public:
    int evenNumberBitwiseORs(vector<int>& nums) {
        int orr=0;
        for(auto &it: nums){
            if(it%2==0){
                orr |= it;
            }
        }
        return orr;
    }
};