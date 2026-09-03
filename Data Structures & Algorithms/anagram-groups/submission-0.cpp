class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        for(string& str: strs) {
            vector<int> keyList(26, 0);
            for(char& c: str) keyList[c - 'a']++;
            string key = to_string(keyList[0]) + ',';
            for(int i = 1; i < 26; i++) {
                key += to_string(keyList[i]) + ',';
            }
            mp[key].push_back(str);
        }
        vector<vector<string>> ans;
        for(const auto& pair: mp) {
            vector<string> st;
            for(const string& str: pair.second)
                st.push_back(str);
            ans.push_back(st);
        }
        return ans;
    }
};
