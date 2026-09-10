class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumEven=0;
        int sumOdd=0;
        for(int i=1;i<=n;i++){
            sumEven=sumEven + 2*i;
            sumOdd=sumOdd+ 2*i-1;
        }
        int res=min(sumOdd,sumEven);
        while(res>0){
            if(sumOdd % res==0 && sumEven % res==0){
                break;
            }
            res--;
        }
        return res;
    }
};