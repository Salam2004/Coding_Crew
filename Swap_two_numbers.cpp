class Solution{   
public:
    pair<int, int> get(int a, int b){
        //complete the function here
        a=a+b;
        b=a-b;
        a=a-b;
        return {a, b};
    }
};
//This C++ class `Solution` contains a 
//function `get` that swaps the values 
//of two integers `a` and `b` using 
//arithmetic operations without using 
//a temporary variable. Inside the function,
//it first adds `a` and `b` and assigns the 
//result to `a`. Then it subtracts `b` from
//the updated `a` and assigns the result to 
//`b`. Finally, it subtracts the updated `b`
//from the updated `a` and returns a pair 
//containing the swapped values `{a, b}`.
