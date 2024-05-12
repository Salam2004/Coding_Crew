class Solution
{
public:
	public:
		int find_median(vector<int> v)
		{
		    // Code here.
		    int n=v.size();
		    sort(v.begin(),v.end());
		    if(n%2==0)
		    {
		        int res=v[n/2]+v[n/2-1];
		        res/=2;
		        return res;
		    }
		    return v[n/2];
		}
};
//This C++ code defines a class `Solution`
//with a method `find_median` that 
//calculates the median of a given vector 
//`v`. It first sorts the vector in 
//ascending order. If the size of the 
//vector is even, it calculates the median
//by averaging the middle two elements. 
//If the size is odd, it returns the middle
//element. The code assumes the input vector
//is not empty.
