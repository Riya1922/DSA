class Solution {
public:
bool res1(string &s, int i, int j){
    while(i<j){
        if(s[i]!=s[j]) return false;
        else{
            i++;
            j--;
        }
    }
    return true;
}
    bool validPalindrome(string s) {
        int n =  s.size();
       int i=0, j=n-1;
       while(i<j){
        if(s[i]!=s[j]){
          return res1(s, i+1, j) || res1(s, i, j-1);
        }
        else{
            i++;
            j--;
        }
       }
       return true;
    }
};