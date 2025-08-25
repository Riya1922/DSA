class Solution {
public:
//Riya Malik
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        int n =  nums.size();
        for(auto &it: nums) mp[it]++;

        for(auto [el, f]: mp){
            if(f>(n/2)){
                return el;
            }
        }
        return -1;
    }
};