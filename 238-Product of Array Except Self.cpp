// This a preMultiplication and then post multiplication approach
class Solution {
public:
	vector<int> productExceptSelf(vector<int>& nums) {
		vector<int> ans;
		//nums.insert(nums.begin(), 1);
		int multi = 1;
		for (int i = 0; i < nums.size(); i++) {
			multi = multi * nums[i];
			ans.push_back(multi);
		}
		nums.push_back(1);
		multi = 1;
		for (int i = ans.size()-1; i >= 0; i--) {
			multi = multi * nums[i + 1];
			if (i == 0) {
				ans[i] = multi;
				break;
			}
			ans[i] = ans[i - 1] * multi;
		}
		//ans.pop_back();
		return ans;
	}
};