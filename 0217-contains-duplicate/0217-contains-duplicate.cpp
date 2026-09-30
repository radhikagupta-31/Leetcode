class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        for (auto i : nums){
            if (mp.count(i)){
                return true;
            }
            else 
            mp[i]++;
        }
return false;
    }
};