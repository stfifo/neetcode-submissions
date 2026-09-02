class Solution {
public:

    string encode(vector<string>& strs) {
        string result = "";
        for (auto& str: strs) {
            result += str;
            result += '\n';
        }

        return result;
    }

    vector<string> decode(string str) {
        vector<string> vec;
        string temp = "";
        for (auto& s: str) {
            if (s != '\n') temp += s;
            else {
                vec.push_back(temp);
                temp = "";
            }
        }

        return vec;
    }
};
