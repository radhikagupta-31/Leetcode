class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans = "";
        while (columnNumber > 0) {
            columnNumber--;
            int n = columnNumber % 26;
            char ch = 'A' + n;
            ans += ch;
            columnNumber = columnNumber / 26;
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};