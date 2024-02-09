class Solution {
public:
    bool static compare(pair<int, int> &a, pair<int, int> &b) {
        if(a.second == b.second) {
            return a.first > b.first;
        }
        return a.second > b.second;
    }
    string frequencySort(string s) {
        unordered_map<int, int> m;
        for(int i=0;i<s.length();i++) {
            m[s[i]]++;
        }
        
        vector<pair<int, int>> v(m.begin(), m.end());
        sort(v.begin(), v.end(), compare);

        string ans;

        for(int i=0;i<v.size();i++) {
            for(int j=0;j<v[i].second;j++) {
                ans += (char) v[i].first;
            }
        }

        return ans;
    }
};
