class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int , int> visited;
        int newTarget;
        
        for(int i=0 ; i<nums.size(); i++)
        {
            
            newTarget = target - nums[i];
            if(visited.count(newTarget))
            {
                return {i , visited[newTarget]} ;
            }
            visited[nums[i]] = i ;
        }
        
        return {} ;
        
    }
};