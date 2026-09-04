class Solution {
public:
    char findTheDifference(string s, string t) {
        std::sort(s.begin(),s.end());
        std::sort(t.begin(), t.end());

        int n = s.length();
        for(int i = 0 ; i < n; i++){
            if(s[i] != t[i]){
                return t[i];
            }
        }
        return t[n];
    }
};