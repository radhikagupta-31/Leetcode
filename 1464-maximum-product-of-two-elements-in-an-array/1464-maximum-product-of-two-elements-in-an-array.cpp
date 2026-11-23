class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int mul = 1;
        int maximum = 0;
        for (int i = 0 ; i<n ; i++){
            mul =1;
            for (int j = i+1 ; j<n; j++){
                mul = (nums[i]-1) * (nums[j] -1) ;
                maximum = max(maximum , mul);
            }
            
        }
        return maximum;
    }
};