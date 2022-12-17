//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minimumMultiplications(vector<int>& arr, int start, int end) {
        // code here
        queue<pair<int, int>> que;
        vector<int> dis(100000 , 1e9);
        que.push({start , 0});
        dis[start] = 0;
        int mod = 100000;
        while(!que.empty()){
            int mul = que.front().first;
            int steps = que.front().second;
            que.pop();
            for(auto it : arr){
                int num = (mul * it) % mod;
                if(steps + 1 < dis[num]){
                    dis[num] = steps +  1;
                    if(num == end) return steps + 1;
                    que.push({num , steps + 1});
                }
            }
            
        }
        return -1;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int start, end;
        cin >> start >> end;
        Solution obj;
        cout << obj.minimumMultiplications(arr, start, end) << endl;
    }
}

// } Driver Code Ends