class Solution {
public:
   	int tribonacci(int n) {
        int arr[38]={0,1,1,0};
        for(int i=3;i<=37;i++)
            arr[i]=arr[i-1]+arr[i-2]+arr[i-3];
        return arr[n];
    }
};