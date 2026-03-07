class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> ans(nums.size());
        int j=0;
        for(int i=0; i<nums.size();i++){
            if(nums[i]==0) continue;
            else{
                ans[j]= nums[i];
                j++;
            }  
        }
        for(int i=0; i<nums.size(); i++){
            nums[i]= ans[i];
        }
    }
};