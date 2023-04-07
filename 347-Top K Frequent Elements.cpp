class Solution {
public:
	vector<int> topKFrequent(vector<int>& nums, int k) {
		if (nums.size() == 1) return {nums[0]};
		unordered_map<int, int> freq;
		//unordered_map<int, vector<int>> ans;
		vector<vector<int>> ans(nums.size()+1);
		vector<int> finalAns = {};
		for (int i = 0; i < nums.size(); i++) {
			freq[nums[i]]++;
		}

		for (auto &x : freq) {
			ans[x.second].push_back(x.first);
		}

		for(int i=ans.size()-1; i>=0; i--){
			if(k == 0) break;
			if(ans[i].size() == 0) continue;
			for(int j:ans[i]){
				finalAns.push_back(j);
				k--;
			}
		}
		return finalAns;
	}
};