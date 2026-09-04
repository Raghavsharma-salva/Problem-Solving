class Solution {
public:
    bool isAnagram(string s, string t) {
       std::sort(s.begin(),s.end());
       std::sort(t.begin(),t.end());
        int n = s.length();
        bool flag = true;
        
        if(n != t.length()){
            return false;
        }
       for(int i = 0; i < n ; i++){
            if(s[i] != t[i]){
                flag = false;
            }
       } 

       return flag;
    }
};