/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int lo = 1, hi = n;
        while(hi - lo > 1){
            int mid = lo + (hi - lo) / 2;
            // cout << lo << " " << hi << " " << mid << endl;
            int g = guess(mid);
            if(g == -1){
                hi = mid - 1;
            }
            else if(g == 1){
                lo = mid + 1;
            }
            else return mid;
        }
        if(guess(hi) == 0) return hi;
        else return lo;
    }
};