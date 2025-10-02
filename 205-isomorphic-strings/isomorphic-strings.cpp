class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()) return false;
        unordered_map<char, char> mp;
       unordered_map<char, int> mp2;
        for(int i=0; i<s.size(); i++){
            if(mp.find(s[i])!=mp.end()){
                if(mp[s[i]]!=t[i]) return false;
            }
            else if(mp2.find(t[i])==mp2.end()){
                mp[s[i]] = t[i];
                mp2[t[i]]++;
            }
            else return false;
        }
        return true;
    }
};