class Solution {
public:
	bool containsDuplicate(vector<int>& nums) {
		unordered_map<int, int> freq;

		for (int i = 0; i < nums.size(); i++) {
			if (freq.count(nums[i])) {
				return false;
			}
			freq[nums[i]]++;
		}

		return true;
	}
};