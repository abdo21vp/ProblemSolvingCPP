// Last updated: 11/22/2026, 9:48:18 AM
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        long  original, rev = 0;
        
        original = x;
        while (x > 0) {
            rev = rev * 10 + (x % 10);
            x /= 10;
        }
        if (original == rev)
            return true;
        else
            return false;
    }
};