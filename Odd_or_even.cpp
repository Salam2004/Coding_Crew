class Solution{   
public:
    string oddEven(int N){
        // code here 
        if(N&1)
        {
            return "odd";
        }
        return "even";
    }
};
//This C++ class contains a function 
//`oddEven` that takes an integer `N`
//and returns "odd" if `N` is odd, and
//"even" otherwise. It uses a bitwise 
//AND operation with 1 (`N&1`) to check
//if `N` is odd. If the result is true,
//it returns "odd"; otherwise, it returns 
//"even".
