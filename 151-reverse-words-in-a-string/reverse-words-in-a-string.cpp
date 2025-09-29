class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        int n =  s.size();
        string p = "";
        for(int i=0; i<n; i++){
             if(s[i]!=' ') p.push_back(s[i]);
             else if(s[i]==' ' && !p.empty()){
                st.push(p);
                p = "";
             }
        }
        if(!p.empty())st.push(p);
        string res;
        while(st.empty()==false){
            res += st.top();
            st.pop();
            res += ' ';
        }
        res.pop_back();
        return res;
    }
    
};