class Solution {
  public:
    int gcd(int a, int b) {
        while(a!=b){
            if(a>b)
            a=a-b;
            else
            b=b-a;
        }
        return a;
    }
};
//This displays the Euclidean approach to finding the GCD of two numbers, a and b.
