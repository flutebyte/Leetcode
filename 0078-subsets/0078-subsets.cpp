class Solution {
public:
    
    void solve(int ind, vector<int>& current,vector<int>& nums, vector<vector<int>>& res){
        if(ind == nums.size()){
            res.push_back(current);
            return;
        }
        current.push_back(nums[ind]);
        solve(ind+1, current, nums,res);

        current.pop_back();
        solve(ind+1, current, nums,res);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> current;
        solve(0,current,nums,res);
        return res;
    }
};