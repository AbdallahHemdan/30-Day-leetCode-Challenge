class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int sm = 0;
        int mxSum = INT_MIN;
        for (int i = 0; i < nums.size(); i++)
        {
            sm += nums[i];
            if (sm > mxSum)
                mxSum = sm;
            if (sm < 0)
                sm = 0;
        }
        return mxSum;
    }
};
