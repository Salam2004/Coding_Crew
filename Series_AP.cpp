class Solution {
  public:
    int nthTermOfAP(int a1, int a2, int n) {
        // code here
        return a1+(a2-a1)*(n-1);
    }
};
//This C++ function calculates the nth term of
//an arithmetic progression (AP) given the first
//term (a1), second term (a2), and the position 
//of the term (n). It uses the formula for the 
//nth term of an AP: \( a_n = a_1 + (n-1) \cdot d \),
//where \( d \) is the common difference between 
//consecutive terms, which is \( a2 - a1 \). So, the
//function returns \( a1 + (a2 - a1) \times (n - 1) \).
