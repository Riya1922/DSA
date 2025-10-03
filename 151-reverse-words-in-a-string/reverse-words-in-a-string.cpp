class Solution {
public:

    string reverseWords(string s) {
        string res;
        int n = s.size();
        stringstream ss(s);
        string t;

        while(getline(ss, t, ' ')){
            if(t.empty()==false){
                reverse(t.begin(), t.end());
                res += t;
                res.push_back(' ');
            }
        }
        res.pop_back();
        reverse(res.begin(), res.end());
        return res;
    }
    
};