class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> map;
        for(int i = 0; i < nums.size(); i++)
        {
            map.insert(nums[i]);
        }

        if (map.size() < nums.size()) return true;

        return false;
    }
};