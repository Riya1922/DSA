class Solution {
public:
    bool isPalindrome(string s) {
        string res = "";
        for(auto &it: s){
            if(isalnum(it)){
                res.push_back(tolower(it));
            }
        }
        string t = res;
        reverse(res.begin(), res.end());
        if(t==res) return true;
        return false;
    }

};