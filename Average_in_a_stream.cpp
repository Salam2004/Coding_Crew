class Solution{
public:	
	vector<float> streamAvg(int arr[], int n) {
	    // code here
	    vector<float> res;
	    long long int t=0;
	    for(int i=0;i<n;i++)
	    {
	        t+=arr[i];
	        res. push_back((float)t/(i+1));
	    }
	    return res;
	}
};
//This C++ class `Solution` defines a function
//`streamAvg` to compute the streaming average
//of an input array `arr` of integers. It 
//initializes an empty vector `res` to store 
//the streaming averages. It iterates through 
//the array, accumulating the sum `t` of 
//elements encountered so far. For each iteration, 
//it calculates the average up to that point and
//appends it to `res`. Finally, it returns the
//vector of streaming averages.
