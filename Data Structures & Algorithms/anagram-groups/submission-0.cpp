class Solution {
public:
    //approach is to use a hashmap where key is sorted string and value is list of original strings
    //After looping through strs list, go through map and append values of each hash key
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        std::unordered_map<string, vector<string>> sorted;
        if(strs.size() == 1)
        {
            res.push_back(strs);
            return res;
        }

        for(int i = 0; i < strs.size(); i++)
        {
            string str = strs[i];
            std::sort(str.begin(), str.end());
            if(!sorted.contains(str))
            {
                vector<string> add;
                add.push_back(strs[i]);
                sorted[str] = add;
            }
            else
            {
                sorted[str].push_back(strs[i]);
            }
        }

        for(const auto& [key,value] : sorted)
        {
            res.push_back(value);
        }

        return res;
    }
};
