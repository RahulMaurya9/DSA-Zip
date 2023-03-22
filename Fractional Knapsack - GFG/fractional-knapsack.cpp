//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


// } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/

#define deb(x) cout<<#x << " " << x << endl;
class Solution
{
    private: 
    static bool comp(Item a, Item b ){
        double aa = (double)a.value / (double)a.weight;
        double bb = (double)b.value / (double)b.weight;
        return bb < aa;
    }
    public:
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
        sort(arr , arr + n , comp);
        double finval = 0;
        int curweight = 0;
        for(int i = 0 ; i < n ; ++i ){
            if(arr[i].weight + curweight <= W){
                curweight += arr[i].weight;
                finval += arr[i].value;
            }
            else{
                int remain = W- curweight;
                finval += (arr[i].value / (double)arr[i].weight) * (double)remain;
                break;
            }
        }
        return finval;
    }
    
        
};


//{ Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}
// } Driver Code Ends