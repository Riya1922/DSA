class Solution {
public:
    int thirdMax(vector<int>& nums) {
        unordered_set<int> st;
        for(auto &it: nums){
            st.insert(it);
        }
        vector<int> ans;
        for(auto &it: st){
            ans.push_back(it);
        }
        sort(ans.begin(), ans.end(), greater<int>());
        if(ans.size()>=3) return ans[2];
        else return ans[0];
        
    }
};