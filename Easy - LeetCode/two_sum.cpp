class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int f_ind, s_ind;
        bool answer = false;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if ((nums[i] + nums[j]) == target)
                {
                    f_ind = i;
                    s_ind = j;
                    answer = true;
                    break;
                }
                else
                {
                    continue;
                }
            }
            if (answer)
            {
                break;
            }
        }
        return {f_ind, s_ind};
    }
};