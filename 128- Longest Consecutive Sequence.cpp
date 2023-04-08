class Solution {
public:
	int longestConsecutive(vector<int>& nums) {
		if (nums.size() == 0) return 0;
		unordered_map<int, int> freq;
		unordered_map<int, int> visited;
		for (int i = 0; i < nums.size(); i++) {
			freq[nums[i]] = i;
			visited[nums[i]] = 0;
		}
		int maxCount = INT_MIN;
		for (int i = 0; i < nums.size(); i++) {
			if(visited[nums[i]] == 1) continue;
			int tempIndex = i;
			int cnt = 0;
			cnt++;
			visited[nums[tempIndex]] = 1;
			while (freq.count(nums[tempIndex] - 1)>0 && visited.count(nums[tempIndex]-1)!=0) {
				tempIndex = freq[nums[tempIndex] - 1];
				cnt++;
				visited[nums[tempIndex]] = 1;
			}
			maxCount = max(maxCount, cnt);
		}

		return maxCount;

	}
};