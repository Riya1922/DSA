class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        unordered_map<char, int> mp;

        for(auto &ch: brokenLetters){
            mp[ch]++;
        }

        stringstream ss(text);
         string w;
         int cnt=0;
        while(getline(ss, w, ' ')){
            bool flag = false;
           for(int i=0; i<w.size(); i++){
            if(mp.find(w[i])!=mp.end()){
                flag = true;
                break;
            }
           }
           if(flag==false) cnt++;
        }
        return cnt;
    }
    
};