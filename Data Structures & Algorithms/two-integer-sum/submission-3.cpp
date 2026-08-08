class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> map;
        std::vector<int> res;

        for(int i = 0; i < nums.size(); i++)
        {
            int remain = target - nums[i];

            if (map.contains(remain))
            {
                res.push_back(map[remain]);
                res.push_back(i);
                break;
            }
            map[nums[i]] = i;
        }

        return res;
    }
};
