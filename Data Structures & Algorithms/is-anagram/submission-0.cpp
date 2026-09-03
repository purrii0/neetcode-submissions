class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> charList(26, 0);
        if(s.size() != t.size()) return false;
        for(int i = 0; i < s.size(); i++) {
            charList[s[i] - 'a'] += 1;
            charList[t[i] - 'a'] -= 1;
        }
        for(int& x: charList) if(x != 0) return false;
        return true;
    }
};
