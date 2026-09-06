class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int Gcd = 0;
        int sumOdd = 0;
        int sumEven = 0;
        for(int i = 1 ; i <= n*2 ; i++ ){
            if(i % 2 == 0 ){
                sumEven += i;
            }else{
                sumOdd += i;
            }
        }
        for(int i = 1 ; i <= std::min(sumEven , sumOdd); i++){
            if(sumEven % i == 0 && sumOdd % i == 0 ){
                Gcd = i;
            }
        }

        return Gcd;
        
    }
};