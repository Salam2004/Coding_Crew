 class Solution {
  public:
    int gcd(int a, int b) {
        // code here
        if(a==0)
        {
            return b;
        }
        else if(b==0)
        {
            return a;
        }
        else
        {
            if(a>b)
            {
                return gcd(a%b,b);
            }
            else
            {
                return gcd(b%a,a);
            }
        }
    }
};
//This  C++ code defines a function to
//find the greatest common divisor (GCD)
//of two integers using the Euclidean 
//algorithm. It checks if either input 
//is zero and returns the other, or 
//recursively calculates the GCD by 
//taking the remainder of the larger 
//number divided by the smaller one 
//until one of them becomes zero. 
//Then it returns the non-zero value as 
//the GCD.
