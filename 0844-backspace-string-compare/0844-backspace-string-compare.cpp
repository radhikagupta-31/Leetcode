class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int n = s.size();
        int m = t.size();
        stack <char> ans1;
        stack <char> ans2;
        for (int i = 0 ; i<n ; i++){
          if (s[i] != '#'){
            ans1.push(s[i]);}
           else if (!ans1.empty()){
            ans1.pop();
           }

          
        }

          for (int i = 0 ; i<m ; i++){
          if (t[i] != '#'){
            ans2.push(t[i]);}
             else if (!ans2.empty()){
            ans2.pop();
           }
        }
      if (ans1.size() != ans2.size()){
        return false;
      }
     while(!ans1.empty() && !ans2.empty()){
        if (ans1.top() != ans2.top()){
            return false;
        }
        ans1.pop();
        ans2.pop();
     }
     
     return true;
    }
};