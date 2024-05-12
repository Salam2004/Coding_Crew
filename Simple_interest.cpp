class Solution {
  public:
    double simpleInterest(int P, int R, int T) {
        // code here
        double res=(double)(P*T*R)/100;
        return res;
    }
};
//This C++ class `Solution` contains a function 
//`simpleInterest` that calculates the simple 
//interest based on the principal amount `P`, 
//the rate of interest `R`, and the time period 
//`T`. The formula for simple interest  is P*T*R/100.
//The function computes the interest by multiplying 
//`P`, `R`, and `T`, then dividing by 100, and returns
//the result. It ensures that the calculation is done 
//using floating-point arithmetic by casting one of 
//the variables to `double`.
