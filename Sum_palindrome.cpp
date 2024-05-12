class Solution {
    public:
    bool palindornot(long long n){
        string str=to_string(n),rev=to_string(n);
        reverse(str.begin(),str.end());
        if(str==rev)
        {
            return true;
        }
        return false;
    }
    
    long long isSumPalindrome(long long n){
        int itr=5;
        if(palindornot(n))return n;
        while(itr--){
            string str=to_string(n);
            string res=str;
            reverse(res.begin(),res.end());
            if(palindornot(stol(res)+stol(str)))
            {
                return stol(res)+stol(str);
            }
            n=stol(res)+stol(str);
        }
        return -1;
        
    }
};
//This C++ class `Solution` contains two functions.
//The first function `palindornot` checks if a 
//given number `n` is a palindrome by converting it
//to a string, reversing the string, and comparing it
//with the original. The second function `isSumPalindrome` 
//takes a number `n` and iteratively adds its reverse to 
//itself, checking if the sum becomes a palindrome. 
//It runs a maximum of five iterations. If the original 
//number is already a palindrome, it returns it immediately. 
//If after adding the reverse, a palindrome is found within 
//the iterations, it returns that sum; otherwise, it returns -1.
