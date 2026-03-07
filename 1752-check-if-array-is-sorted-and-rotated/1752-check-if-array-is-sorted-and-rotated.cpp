class Solution {
public:
    bool check(vector<int>& nums) {
        int l = 0;
        int r = nums.size();
        // while(left<r){
        //     int mid = left+(r-left)/2;
        //     if(mid>=nums.size()-1) return true;
        //     if(nums[mid]>=nums[mid+1]){
        //         for(int i=left; i<=mid;i++){
        //             if(nums[i]<=nums[i+1]){
        //                 return true;
        //             }else return false;
        //         }
        //         for(int i=mid+1; i<r;i++){
        //             if(nums[i]<nums[i+1]){
        //                 return true;
        //             }else return false;
        //         }
        //     }else{
        //         mid+=1;
        //     }
        // }
        // return false;

        int count =0;
        for(int i=0; i<r; i++){
            if(nums[i]>nums[(i+1)%r]){
                count++;
            }
        }
        return count<=1;
    }
};