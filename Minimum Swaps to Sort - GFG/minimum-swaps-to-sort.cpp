//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array. 
	int minSwaps(vector<int>&nums)
	{
	    // Code here
	    int n = nums.size();
	    vector<pair<int, int>> vp;
	    for(int i = 0; i < n; i++){
	        vp.push_back({nums[i], i});
	    }
	    sort(vp.begin(), vp.end());
	    int ans = 0;
	    vector<int> vis(n, 0);
	    for(int i = 0; i < n; i++){
	        if(vis[i] || vp[i].first == nums[i]) continue;
	        
	        int j = vp[i].second;
	        int len = 0;
	        while(vis[j] == 0){
	            vis[j] = 1;
	            len++;
	            j = vp[j].second;
	        }
	        ans += (len - 1);
	    }
	    return ans;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution obj;
		int ans = obj.minSwaps(nums);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends