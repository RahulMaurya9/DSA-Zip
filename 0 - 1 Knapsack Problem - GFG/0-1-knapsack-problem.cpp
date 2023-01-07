//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    int MaxLoot(int ind , int weight , int wtlist [] , int vallist[] , vector<vector<int>>& dp){
        if(ind == 0){
            if(wtlist[0] <= weight) return vallist[0];
            else return 0;
        }
        if(dp[ind][weight] != -1) return dp[ind][weight];
        int nottake = 0+ MaxLoot(ind-1 , weight , wtlist , vallist, dp);
        int take = INT_MIN;
        if(wtlist[ind]<= weight) take = vallist[ind] + MaxLoot(ind-1 , weight - wtlist[ind],wtlist,vallist, dp);
        return dp[ind][weight] = max(take , nottake);
    }
    
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
        vector<vector<int>> dp(n , vector<int>(W+1 , 0));
        //return MaxLoot(n-1 , W, wt , val , dp);
        for(int i =0 ;i < n ; ++i){
            if(wt[i] <= W ) dp[i][wt[i]] = val[i];
        }
        for(int ind = 1 ; ind < n ; ++ind){
            for(int weight = 0 ; weight <= W ; ++weight){
                int nottake = dp[ind-1][weight];
                int take = INT_MIN;
                if(wt[ind]<= weight) take = val[ind] + dp[ind-1][ weight - wt[ind]];
                dp[ind][weight] = max(take , nottake);
            }
        }
        int maxv = 0;
        for(int i = 0 ; i <=W ; ++i){
            maxv = max(maxv , dp[n-1][i]);
        }
        return maxv;
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
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends