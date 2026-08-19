class Solution {
    //first thought is to append list of strings with a hyphen to seperate, then decode by appending to list whenever a hyphen is present
public:

    string encode(vector<string>& strs) {
        string res = "";
        for ( string str : strs)
        {
            int size = str.size();
            res += to_string(size) + "#" + str;
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string> res;
        string temp = "";
        int counter = 0;

        while(counter < s.size())
        {
            int delim = s.find("#", counter);
            int size = stoi(s.substr(counter, delim - counter));
            string temp = s.substr(delim + 1, size);
            res.push_back(temp);
            counter = size + delim + 1;
        }
        
        return res;
    }
};
