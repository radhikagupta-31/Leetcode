class Solution {
public:
    double findMaxAverage(vector<int>& arr, int k) {
        int l =0;
        int r = l+k-1;
        int sum = 0;
       for (int i =0; i<k; i++){
         sum = sum + arr[i]; 
       }
        int maxsum =sum;
    while( r < arr.size()-1){
        sum = sum -arr[l];
        l++;
        r++;
        sum = sum + arr[r];
    maxsum = max(sum , maxsum);
    }
double avg = (double)maxsum / k;
    return avg;

    }
};