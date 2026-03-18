class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> result;
        int i=0;
        int j=n;
        while(i<n || j<nums.size()){
            result.push_back(nums[i]);
            i++;
            result.push_back(nums[j]);
            j++;
        }
        return result;
    }
};