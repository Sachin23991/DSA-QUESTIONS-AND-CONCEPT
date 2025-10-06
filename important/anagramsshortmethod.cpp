class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp; // key: sorted string, value: list of anagrams
        
        for (auto &s : strs) {
            string t = s;
            sort(t.begin(), t.end()); // sort the string
            mp[t].push_back(s);       // group by sorted string
        }
        
        vector<vector<string>> ans;
        for (auto &p : mp) {
            ans.push_back(p.second);
        }
        
        return ans;
    }
};
