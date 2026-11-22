// Last updated: 11/22/2026, 9:48:13 AM

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = static_cast<int>(numbers.size());
        for (int i = 0; i < n; i++) {
            int l = i + 1;
            int r = n - 1;

            while (l <= r) {
                int mid = l + (r - l) / 2;
                int sum = numbers[i] + numbers[mid];

                if (sum == target) {
                    return {i + 1, mid + 1};
                } else if (sum < target) {
                    l = mid + 1;  // sum too small - need larger value on right
                } else {
                    r = mid - 1;
                }
            }
        }
        return {};
    }
};