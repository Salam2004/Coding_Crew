class Solution
{
public:
    vector<int> getTable(int N)
    {
        // Write Your Code here
        vector<int> res;
        for(int i=0;i<10;i++)
        {
            res.push_back(N*(i+1));
        }
        return res;
    }
};
//This C++ class `Solution` contains
//a function `getTable` that generates
//a table of multiples for a given 
//integer `N`. It initializes an empty
//vector `res` to store the results. 
//Then, it iterates from 0 to 9, 
//multiplying `N` by each iteration index
//plus one, and adds the result to the 
//vector. Finally, it returns the vector 
//containing the table of multiples of 
//`N` up to 10.
