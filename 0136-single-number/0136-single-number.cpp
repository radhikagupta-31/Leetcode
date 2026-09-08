class Solution {
public:
//xor
    int singleNumber(vector<int>& nums) {
    // int xor1 =0;
    // for (int i = 0 ; i< nums.size(); i++){
    //     xor1 = (xor1 ^ nums[i]);
    //   }  
    //   return xor1;
// Hashing
    // int maxi = nums[0];
    // for (int i =0 ;i<nums.size(); i++){
    //     maxi = max (maxi, nums[i]);
    // }
    // vector<int> hash(maxi);
    // hash[maxi]= {0};
    // for (int i=0;i<maxi; i++){
    //     hash[nums[i]]++;
    // }for(int i =0; i<nums.size(); i++){
    // if (hash[nums[i]] == 1)
    // return nums[i];
    // }
    // return 0;
    unordered_map <int , int> mp;
    for (int i=0; i< nums.size(); i++){
        mp[nums[i]]++;
    }
    for (auto i : mp){
        if (i.second ==1)
        return i.first;
    }
    return 0;
    }
};