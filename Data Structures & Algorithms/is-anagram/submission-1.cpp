class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map<char, int> map1;
        std::unordered_map<char, int> map2;

        for(int i = 0; i < s.size() ; i++)
        {
            if(!map1.contains(s[i]))
            {
                map1[s[i]] = 1;
            }
            else
            {
                map1.at(s[i])++;
            }
        }

        for(int i = 0; i < t.size() ; i++)
        {
            if(!map2.contains(t[i]))
            {
                map2[t[i]] =1;
            }
            else
            {
                map2.at(t[i])++;
            }
        }

        if(map1 == map2) return true;

        return false;
    }
};
