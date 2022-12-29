//{ Driver Code Starts
//Initial template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template in C++

class Solution
{
    private:
    int path(int a , int b , vector<vector<int>> & dp){
        //Base case
        if(a == 0 && b == 0) return 1;
        if(a < 0 || b < 0) return 0;
        //check the precomputation value in dp {memoization}
        if(dp[a][b] != -1) return dp[a][b];
        //count the unique path till one upward
        int up = path(a-1 , b , dp);
        // count the unique path till one left
        int left = path(a , b-1 , dp);
        // count the current unique path
        return dp[a][b] = up + left;
    }
    public:
    //Function to find total number of unique paths.
    int NumberOfPath(int a, int b)
    {
        vector<vector<int>> dp(a , vector<int>(b,-1));
        //return unique path
        return path(a -1 , b -1 , dp);
    }
};


//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking dimensions of the matrix
        int a,b;
        cin>>a>>b;
        Solution ob;
        //calling NumberOfPath() function
        cout << ob.NumberOfPath(a,b) << endl;
    }
}


// } Driver Code Ends