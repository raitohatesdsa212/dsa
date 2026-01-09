class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> brain;
        for (int i=0;i<nums.size();i++){
            int curr = nums[i];
            int complement = target - curr;
            if (brain.find(complement) != brain.end()){
                return {brain[complement], i};
            }
            // brain[key] = value
            brain[curr] = i;
        }
        return {};
    }
};


