class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        // for(int i=0; i<n; i++){
        //     nums[i]= nums[i]*nums[i];
        // }
        // sort(nums.begin(),nums.end());
        // return nums;
        int left=0; int right = n-1;int pos = n-1;
        vector<int> ans(n);
        while(left<=right){
            if(abs(nums[left]) <= abs(nums[right])){
                ans[pos] = nums[right]*nums[right];
                right--;
                pos--;
            }else{
                ans[pos] = nums[left]*nums[left];
                left++;pos--;
            }
        }
        return ans;
    }
};