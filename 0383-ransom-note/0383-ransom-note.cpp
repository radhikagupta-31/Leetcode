class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map <char , int> mp1;
        unordered_map <char , int> mp2;
        int n = ransomNote.size();
        int m = magazine.size();
        for (int i = 0 ; i <n ; i++){
            mp1[ransomNote[i]]++;
        }
        for (int j = 0 ; j<m ; j++){
            mp2[magazine[j]]++;
        }
        for (auto it : mp1){
            if (mp2[it.first] <it.second)
            return false;
        } 
        return true;
    }
};