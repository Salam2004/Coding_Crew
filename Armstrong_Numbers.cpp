class Solution {
  public:
    string armstrongNumber(int n){
        // code here
        string dup=to_string(n);
        int res=pow(dup[0]-'0',3)+pow(dup[1]-'0',3)+pow(dup[2]-'0',3);
        if(x==n)
        {
           return "Yes";
        }
        return "No";
        
    }
};
//This C++ code defines a class `Solution` with a method `armstrongNumber`
//that checks if a given number `n` is an Armstrong number. It first 
//converts the number `n` to a string to access its individual digits. 
//Then it calculates the sum of the cubes of each digit using the `pow` 
//function and compares it with the original number. If they are equal, 
//it returns "Yes" indicating `n` is an Armstrong number, otherwise, it 
//returns "No". The code assumes `n` is a three-digit number, as it 
//accesses `s[0]`, `s[1]`, and `s[2]`.
