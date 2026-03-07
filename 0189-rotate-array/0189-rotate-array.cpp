class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        int size = nums.size();
        k = k % size;

        vector<int> ans;
        int num = size - k;

        for(int i = num; i < size; i++){
            ans.push_back(nums[i]);
        }

        for(int i = 0; i < num; i++){
            ans.push_back(nums[i]);
        }

        for(int i = 0; i < size; i++){
            nums[i] = ans[i];
        }
    }
};