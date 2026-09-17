class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {
        int n = arr.size();
        vector<int> best(n, INT_MAX);

        int sum = 0;
        int l = 0;

        int ans = INT_MAX;

        for (int r = 0; r < n; r++) {

            sum += arr[r];

            while (sum > target) {
                sum -= arr[l];
                l++;
            }

            if (sum == target) {

                int length = r - l + 1;

                if (l > 0 && best[l - 1] != INT_MAX) {
                    ans = min(ans, length + best[l - 1]);
                }

                if (r == 0)
                    best[r] = length;
                else
                    best[r] = min(best[r - 1], length);
            }
            else {
                if (r > 0)
                    best[r] = best[r - 1];
            }
        }

        if (ans == INT_MAX)
            return -1;

        return ans;
    }
};