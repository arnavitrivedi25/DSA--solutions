class Solution {
  public:
    int countDigits(int n) {
        int res=0;
        while(n>0){
            n=n/10;
            res++;
        }
       return res; 
    }
};