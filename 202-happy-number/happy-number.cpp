class Solution {
public:
int sum(int n){
    int res = 0;
    while(n!=0){
        int l = n%10;
        res += l*l;
        n = n/10;
    }
    return res;
}
    bool isHappy(int n) {
        unordered_map<int, int> mp;
        while(n != 1 && mp.find(n)==mp.end()){
            mp[n]++;
            n = sum(n);
            
        }
       if(n==1) return true;
       else return false;
    }
};