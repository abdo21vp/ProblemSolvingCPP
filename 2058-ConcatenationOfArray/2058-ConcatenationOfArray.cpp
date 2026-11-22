// Last updated: 11/22/2026, 9:48:09 AM
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> out(2*n);
        for (int i = 0; i<n; i++){
            out.at(i) = nums[i];
            out.at(i+n) = nums[i];
        }
        return out;
    }
};