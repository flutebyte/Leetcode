class Solution {
public:

    int binarySearch(vector<int>&nums, int left, int right, int target){
        if(left>right) return -1;

        int mid = left+ (right-left)/2;
        if(nums[mid] == target) return mid;
        
        if(nums[mid] < target){
            return binarySearch(nums, mid+1, right, target);
        }else{
            return binarySearch(nums, left, mid-1, target);
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int left =0;
        int right = nums.size()-1;
        // while(left<right){
        //     int mid = left + (right-left)/2;
        //     if(mid==target) return 
        // }
        
        return binarySearch(nums, left,right,target);
        
    }
};