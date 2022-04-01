class Solution {
public:
    void reverseString(vector<char>& s) {
        reverse(s.begin(), s.end());
        cout << "["; 
        for(auto i : s){
            cout << " << i << "<<",";
        }
        cout << "]"; 
    }
};