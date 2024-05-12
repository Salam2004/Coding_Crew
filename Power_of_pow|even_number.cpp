class Solution
{
	public:
		long long int sum_of_square_evenNumbers(long long int n)
		{
		    // Code here
		    return 2*n*(n+1)*(2*n+1)/3;
		}
};
//This C++ class `Solution` contains a function 
//`sum_of_square_evenNumbers` that calculates the
//sum of squares of even numbers up to a given integer
//`n`. It uses the formula for the sum of the squares 
//of the first `n` even numbers, which is 2n(n+1)(2n+1)/3.
//The function directly returns the result of this formula, 
//efficiently computing the sum of squares of even numbers 
//without the need for iteration. This approach simplifies 
//the computation, making it more efficient for large values 
//of `n`.
