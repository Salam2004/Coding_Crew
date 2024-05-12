class Solution {
  public:
    int isDigitSumPalindrome(int n) {
        // code here

        int sum = 0;
        string s = to_string(n);
        for(char c : s) {
            sum += c - '0';
        }
        s = to_string(sum);
        n = s.size();
        for(int i = 0; i < n / 2; i++) {
            if(s[i] != s[n - i - 1])
                return 0;
        }
        return 1;
    }
}; 
//This C++ code checks if the sum of the digits
//of an integer forms a palindrome. It first 
//converts the integer to a string to extract its
//digits. Then, it calculates the sum of the digits.
//Afterward, it converts the sum back to a string to
//check if it's a palindrome. If the characters from
//the start and end of the string match at each 
//position (while comparing from outer ends towards 
//the center), it's a palindrome. If any character 
//doesn't match, the function returns 0, indicating 
//it's not a palindrome; otherwise, it returns 1, 
//indicating a palindrome digit sum.
