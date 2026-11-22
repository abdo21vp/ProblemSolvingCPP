// Last updated: 11/22/2026, 9:48:11 AM
class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int product = 1;
        int n = nums.size();
        vector<int> out(n);
        for (int i = 0; i < n; i++)
        {
            product *= nums[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 0)
            {
                long p = 1;
                for (int j = 0; j < n; j++)
                {
                    if (j != i)
                        p *= nums[j];
                    else continue;
                }
                out.at(i) = p;
            }
            else
                out.at(i) = product / nums[i];
        }
        return out;
    }
};