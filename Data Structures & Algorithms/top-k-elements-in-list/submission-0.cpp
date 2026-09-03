class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> mp;
        for(int& x: nums) mp[x] += 1;
        vector<pair<int, int>> cnt;
        for(const auto& pair: mp) cnt.push_back({pair.second, pair.first});
        sort(cnt.rbegin(), cnt.rend());
        vector<int> ans;
        for(int i = 0; i < k; i++) {
            ans.push_back(cnt[i].second);
        }
        return ans;
    }
};
