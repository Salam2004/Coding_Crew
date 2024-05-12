class Solution {
  public:
    int greatestOfThree(int a, int b, int c) {
        // code here
        if(a>b)
        {
            if(a>c)
            {
                return a;
            }
            else
            {
                return c;
            }
        }
        else
        {
            if(b>c)
            {
                return b;
            }
            else
            {
                return c;
            }
        }
    }
};
//This C++ class `Solution` contains a function
//`greatestOfThree` to find the greatest among 
//three integers `a`, `b`, and `c`. It first 
//compares `a` and `b`. If `a` is greater, it 
//further compares `a` with `c`, returning `a` 
//if it's greater than both `b` and `c`, otherwise
//returning `c`. If `b` is greater than `a`, it 
//compares `b` with `c`, returning `b` if it's 
//greater than `c`, otherwise returning `c`. This
//way, it determines and returns the greatest among
//the three integers.
