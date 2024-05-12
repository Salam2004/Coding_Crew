class Solution
{
	public:
		int count_divisors(int n)
		{
		    //Code here.
		    int cnt=0;
		    
		    for(int i=1;i*i<=n;i++)
		    {
		        if(n%i==0)
		        {
		            if(n/i==i&&i%3==0)
		            {
		                cnt++;
		            }
		            else
		            {
		                if(i%3==0)
		                {
		                    cnt++;
		                }
		                if((n/i)%3==0)
		                {
		                    cnt++;
		                }
		            }
		        }
		        
		    }
		    return cnt;
		}
};
//This C++ class `Solution` defines a 
//function `count_divisors` to count 
//the number of divisors of a given 
//integer `n` that are divisible by 3. 
//It initializes a counter variable `cnt` 
//to zero. It then iterates from 1 to the 
//square root of `n`. For each divisor `i`, 
//it checks if `n` is divisible by `i`. If 
//it is, it increments `cnt` if `i` itself 
//is divisible by 3. Additionally, if `n` 
//divided by `i` is not equal to `i` and is 
//divisible by 3, it increments `cnt` again. 
//Finally, it returns the count of divisors 
//divisible by 3.
