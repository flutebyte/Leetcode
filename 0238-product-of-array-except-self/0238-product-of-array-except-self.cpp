class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result(nums.size());
        // int i=0;
        // int j=0;
        // int ans = 1;
        // while(i!= nums.size()){
        //     if(j==nums.size()){
        //         result[i]=ans;
        //         ans=1;
        //         i++;
        //         j=0;
        //     }
        //     if(i==j){
        //         j++; continue;
        //     }
        //     ans*=nums[j];
        //     j++;
        // }
        // return result;
        int prefix = 1, suffix = 1;
        for(int i=0; i<nums.size(); i++){
            result[i]=prefix;
            prefix*= nums[i];
        }
        for(int i=nums.size()-1; i>=0; i--){
            result[i]*= suffix;
            suffix*= nums[i];
        }
        return result;
    }
};