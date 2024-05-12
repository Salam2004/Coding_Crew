class Solution {
  public:
    int findNthTerm(int N) {
        // code here
        return N*(N+1)/2;
    }
};
//This C++ class `Solution` contains
//a function `findNthTerm` that 
//calculates the value of the nth term
//in a series. The series follows the 
//pattern of the sum of the first N 
//natural numbers, which is ( N * (N+1)/2 ). 
//Thus, the function returns the result of 
//( N times (N+1) ) divided by 2, providing 
//the nth term of the series. This formula 
//simplifies the computation of the nth term 
//in the series, making it efficient.
