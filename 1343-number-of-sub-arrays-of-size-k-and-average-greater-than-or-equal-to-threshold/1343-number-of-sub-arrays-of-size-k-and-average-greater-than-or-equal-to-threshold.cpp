class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
       int l = 0;
       int r = k;
       int sum = 0;
       int cnt = 0;
       for (int i =0; i<k ; i++){
            sum += arr[i];
       } 
       if (sum >= k*threshold){
          cnt++; 
       } 
       while (r < arr.size()){
            sum = sum - arr[l];
            sum = sum + arr[r];
            if (sum >= k*threshold){
                cnt++;
            }
            l++;
            r++;
       }
       return cnt;
    }
};