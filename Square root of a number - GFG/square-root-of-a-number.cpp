//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

  

// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
         int l = 1, h = x, mid;
         while(h - l > 1){
             mid = l + (h - l) / 2;
             if(1LL * mid * mid == x) return mid;
             else if(1LL * mid * mid > x) { h = mid - 1; }
             else { l = mid; }
         }
         if(1LL * h * h <= x) return h;
         return l;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}

// } Driver Code Ends