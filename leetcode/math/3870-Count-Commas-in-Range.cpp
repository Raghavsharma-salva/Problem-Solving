class Solution {
public:
    int countCommas(int n) {
        long long int ans = 0;

        for(long long int i = 1000 ; i <= n ; i *=1000){
            ans = n - i + 1;
        }

        return ans;
    }
};