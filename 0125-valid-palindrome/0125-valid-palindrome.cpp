class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size()-1;
        int low = 0;
        int high = n;
        while(low<high){
            while ( low <high && !isalnum(s[low]) ){
                low++;
            }
           while ( low < high && !isalnum(s[high])){
            high--;
           }
           if (tolower(s[low]) != tolower(s[high]) ){
            return false;
           }
           low++;
           high--;
        }
        return true;
    }
};