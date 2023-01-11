//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    // int MaxKnap(int ind , int weigh , int val[] , int wt[], vector<vector<int>>& dp){
    //     if(ind == 0){
    //         if(wt[0] <= weigh) return (weigh/wt[0])*val[0];
    //         return 0;
    //     }
    //     if(dp[ind][weigh] != -1 ) return dp[ind][weigh];
    //     int nottake = MaxKnap(ind-1 , weigh , val , wt, dp);
    //     int take = INT_MIN;
    //     if(wt[ind] <= weigh) take = val[ind] + MaxKnap(ind , weigh - wt[ind] , val , wt, dp);
    //     return dp[ind][weigh] = max(nottake , take);
    // }
    int knapSack(int N, int W, int val[], int wt[])
    {
        vector<vector<int>>dp(N , vector<int>(W+1 , 0));
        // return MaxKnap(N - 1 , W , val , wt, dp);
        for(int w =  0 ; w <= W ; ++w){
            dp[0][w] =((int)(w/wt[0])) * val[0];
        }
        for(int ind = 1 ;  ind < N ; ++ind){
            for(int weight  = 0 ; weight <= W ; ++weight){
                int nottake = dp[ind-1][weight];
                int take = 0; 
                if(wt[ind] <= weight) take = val[ind] + dp[ind][weight - wt[ind]];
                dp[ind][weight]= max(nottake , take);
            }
        }
        return dp[N-1][W];
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, W;
        cin>>N>>W;
        int val[N], wt[N];
        for(int i = 0;i < N;i++)
            cin>>val[i];
        for(int i = 0;i < N;i++)
            cin>>wt[i];
        
        Solution ob;
        cout<<ob.knapSack(N, W, val, wt)<<endl;
    }
    return 0;
}
// } Driver Code Ends