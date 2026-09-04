//For an integer n, find the number of trailing zeroes in n!.
class Solution {
  public:
    int trailingZeroes(int n) {
        int x=0;
        for(int i=5;i<=n;i=i*5){
            x=x+n/i;
        }
    return x;
    }
};
