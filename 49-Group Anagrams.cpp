class Solution {
public:
	//O(m*nlogn) Counting sort use korle O(m*n) kora jabe
	vector<vector<string>> groupAnagrams(vector<string>& strs) {
		unordered_map<string, vector<string>> bucket;
		vector<vector<string>> ans;

		for (int i = 0; i < strs.size(); i++) {
			string temp = strs[i];
			sort(strs[i].begin(), strs[i].end());
			bucket[strs[i]].push_back(temp);
		}

		for (auto &x : bucket) {
			ans.push_back(x.second);
		}
		return ans;
	}
};