class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        unordered_map<char, int> mp;

        for(auto &ch: s){
            mp[ch]++;
        }

        for(auto &it: t){
            if(mp.find(it)!=mp.end()){
             mp[it]--;
             if(mp[it]==0) mp.erase(it);
            }
            else return false;
        }
        return true;
    }
};