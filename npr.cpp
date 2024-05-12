class Solution{
public:
    long long nPr(int n, int r){
        // code here
        r=n-r+1;
        long long res=1;
        for(int i=r;i<=n;i++)
        {
            res*=i;
        }
        return res;
    }
};
//This C++ class `Solution` defines a
//function `nPr` to calculate the 
//permutation \( P(n,r) \), where \( n \)
//is the total number of items and \( r \)
//is the number of items taken at a time. 
//It initializes the result to 1 and 
//iterates from \( n-r+1 \) to \( n \),
//multiplying each number along the way to
//calculate the permutation. Finally, it 
//returns the result.
