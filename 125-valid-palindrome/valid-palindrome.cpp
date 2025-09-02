class Solution {
public:
    bool isPalindrome(string s) {
        string t;
        for(int i=0; i<s.size(); i++){
            if(s[i]>='a' && s[i]<='z'){
                t.push_back(s[i]);
            }
            else if(s[i]>='A' && s[i]<='Z'){
                t.push_back(tolower(s[i]));
            }
            else if(s[i]>='0' && s[i]<='9') t.push_back(s[i]);
        }
        string res =  t;
        reverse(t.begin(), t.end());
        if(t==res) return true;
        return false;
    }
};