class Solution {
public:

    string encode(vector<string>& strs) {
        // encoded format: length of string + '@' + string
        string encoded;
        for (string& s: strs) {
            encoded.append(to_string(s.size()));
            encoded.push_back('@');
            encoded.append(s);
        }
        return encoded;
    }

    vector<string> decode(string s) {
        // find @; extract len and extract substring of that length push back to res
        vector<string> res;
        int i = 0;
        while(i < s.length()) {
            int j = i;
            while (s[j] != '@') j++;
            int len = stoi(s.substr(i, j - i));
            i = j + 1;
            j = i + len;
            res.push_back(s.substr(i, len));
            i = j;
        }
        return res;
    }
};
