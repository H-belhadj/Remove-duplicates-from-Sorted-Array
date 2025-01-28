class Solution {
public:
    int removeDuplicates(vector<int>& nums)
    {
        if(nums.empty())
            return 0;
        int i = 0;
        int j = 1;
        while(++j < distance(nums.begin(), nums.end()))
            if(nums[j] != nums[i])
                nums[++i] = nums[j];
        return i + 1;
    }
};
