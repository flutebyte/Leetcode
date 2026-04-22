class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(int i=0; i<nums.size();i++){
            int l= i+1, r=nums.size()-1;
            if(i > 0 && nums[i] == nums[i-1]) continue;
            while(l<r){
                int cs=nums[l]+nums[r]+nums[i];
                if(cs==0){
                    ans.push_back({nums[i],nums[l],nums[r]});
                    l++;r--;
                    while(l < r && nums[l] == nums[l-1]) l++;
                    while(l < r && nums[r] == nums[r+1]) r--;
                }
                else if(cs<0) l++;
                else r--;
            }
        }
        return ans;
    }
};