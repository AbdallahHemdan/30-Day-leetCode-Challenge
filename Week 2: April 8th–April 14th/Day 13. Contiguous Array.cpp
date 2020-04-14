class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> mp;
		mp[0] = -1;
		int mx = 0, sum = 0;
		for (int i = 0; i < nums.size(); i++){
			sum += nums[i] ? 1 : -1;
			if (mp.find(sum) != mp.end())
				mx = max(i - mp[sum], mx);
			else
				mp[sum] = i;
		}
		return mx;
    }
};
