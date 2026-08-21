class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
    int i = 0 , j= n;
    vector <int> arr;
    while (i<n && j<2*n){
        arr.push_back(nums[i]);
        i++;
        arr.push_back(nums[j]);
        j++;
    }
    return arr;
    }
};