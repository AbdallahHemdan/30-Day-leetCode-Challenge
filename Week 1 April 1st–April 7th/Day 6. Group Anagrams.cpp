class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& a) {
        map<string, vector<string>> mp;
        for (auto i : a) {
            string j = i;
            sort(j.begin(), j.end());
            mp[j].push_back(i);
        }
        vector<vector<string>> ret;
        for (auto i : mp) {
            ret.push_back(i.second);
        }
        return ret;
    }
};


//----- Second Solution ----//
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& a) {
        map<string, vector<string>> mp;
        for (auto i : a) {
            vector<int> frq(26, 0);
            for (int j = 0; j < i.size(); j++) {
                frq[i[j] - 'a']++;
            }
            string ret;
            for (int j = 0; j < 26; j++) ret += to_string(frq[j]) + "#";
            mp[ret].push_back(i);
        }
        vector<vector<string>> ans;
        for (auto i : mp) ans.push_back(i.second);
        return ans;
    }
};
