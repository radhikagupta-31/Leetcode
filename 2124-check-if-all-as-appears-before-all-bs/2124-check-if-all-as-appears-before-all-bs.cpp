class Solution {
public:
    bool checkString(string s) {
        int n = s.size();
        bool check = true;
        for (int i = 0 ; i < n; i++){
            if (s[i] == 'b')
            check = false;
            else if (s[i] == 'a' && check == false ){
                return false;
            }
            }
        
            return true;
    }
};
