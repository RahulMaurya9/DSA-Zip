//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    vector<long long int> twoOddNum(long long int arr[], long long int N)  
    {
        // code here
        vector<long long int> res;
        int xor2 = 0;
        int bitval = 0;
        int x = 0 , y = 0;
        for(int i = 0 ; i < N ; ++i){
            xor2 = xor2^arr[i];
        }
         
        bitval = xor2 & (~(xor2-1));
        
        for(int i = 0 ; i < N ; i++){
            if(arr[i] & bitval) x = x ^ arr[i];
            else y = y ^ arr[i];
        }
        if(x > y) {
            res.push_back(x);
            res.push_back(y);
            return res;
        }
        res.push_back(y);
        res.push_back(x);
        return res;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int N;
        cin>>N;
        long long int Arr[N];
        for(long int i = 0;i < N;i++)
        cin>>Arr[i];
        Solution ob;
        vector<long long int>ans=ob.twoOddNum(Arr,N);
        for(long long int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends