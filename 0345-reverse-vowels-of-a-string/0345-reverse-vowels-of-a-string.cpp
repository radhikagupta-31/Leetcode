class Solution {
public:
bool check(char c){
    return (c == 'a'|| c=='e'||c=='i' || c=='o'|| c=='u'||c=='A'|| c=='E'|| c=='I'||c=='O'|| c=='U');
}
    string reverseVowels(string s) {
       int i = 0;
       int j = s.size()-1;
       while(i<j){
        if (check(s[i]) && check(s[j])){
            swap(s[i],s[j]);
            i++; j--;
        }
        else if(!check(s[i])){
            i++;
        }
        else if(!check(s[j])){
            j--;
        }
       } 
       return s;
    }
};