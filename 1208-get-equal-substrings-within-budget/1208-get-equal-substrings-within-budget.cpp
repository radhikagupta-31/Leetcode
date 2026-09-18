class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int cost  = 0;
        int l =0;
        int r = 0;
        int ans = 0;
        while (r < s.size()){
            cost = cost + abs(s[r] - t[r]);
            r++;
        while (cost>maxCost){
            cost = cost - abs(s[l]-t[l]);
            l++;
        }
        ans  = max(ans , r-l);
        }
        return ans;
    }
};