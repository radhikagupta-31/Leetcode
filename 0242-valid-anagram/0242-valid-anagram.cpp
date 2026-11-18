class Solution {
public:
    bool isAnagram(string s, string t) {
       unordered_map<char, int>mp1;
       unordered_map<char, int>mp2;
       for (int i = 0 ;i<s.size(); i++){
        mp1[s[i]]++;
       }
       for (int j = 0 ; j<t.size(); j++){
        mp2[t[j]]++;
       }
       if (mp1.size() != mp2.size()){
        return false;
       }
      if (mp1 == mp2)
        return true;
      return false;
    }
};