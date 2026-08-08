class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map<int, int> counter;
        vector<int> res;
        for(const auto& num : nums)
        {
            counter[num]++;
        }

        vector<vector<int>> buckets(nums.size() + 1);

        for(const auto& [key, value] : counter)
        {
            buckets[value].push_back(key);
        }

        
        for(int i = buckets.size() -1; i > 0 ; i--)
        {

            for(const auto& num: buckets[i])
            {
                res.push_back(num);
                if(res.size() == k)
                {
                    return res;
                }
            }
            

        }

        return res;
    }
};
