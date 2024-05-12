class Solution
{
	public:
		long long int reverse_digit(long long int n)
		{
		    // Code here
		    long long int res=0;
		    while(n>0)
		    {
		        int rem=n%10;
		        res=res*10+rem;
		        n/=10;
		    }
		    return res;
		}
};
//This C++ code defines a class `Solution` with a 
//method `reverse_digit` that reverses the digits
//of a given number `n`. It initializes a variable 
//`res` to store the reversed number. It iterates 
//through each digit of `n` using a while loop, 
//extracting the last digit using modulo division,
//appending it to `res`, and removing it from `n`. 
//Finally, it returns the reversed number `res`.
