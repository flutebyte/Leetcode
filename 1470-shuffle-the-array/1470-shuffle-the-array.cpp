class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;
        // int i=0;
        // int j=n;
        // while(i<n || j<nums.size()){
        //     result.push_back(nums[i]);
        //     i++;
        //     result.push_back(nums[j]);
        //     j++;
        // }
        for(int i=0; i<n;i++){
            ans.push_back(nums[i]);
            ans.push_back(nums[i+n]);
        }
        return ans;
    }
};