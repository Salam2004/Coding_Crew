class Solution {
  public:
    long long seriesSum(int n) {
        // code here
        long long res=0;
        res+=(long long)n*(n+1)/2;
        return res;
}
};
//This C++ code defines a class with a 
//method `seriesSum` that calculates 
//the sum of the series 1 + 2 + 3 + ... + n.
//It uses the formula for the sum of an
//arithmetic series and returns the result.
//The code ensures the sum is stored as a 
//`long long` to avoid overflow.
