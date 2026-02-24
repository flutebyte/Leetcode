class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        // int res=0;
        // for(int i=0; i<nums.size();i++){
        //     res = res^nums[i];
        // }
        // return res;
        int low=0;
        int high= nums.size()-1;
        while(low<high){
            int mid = low + (high-low)/2;
            if(mid%2==0){
                if(nums[mid]==nums[mid+1]){
                    low=mid+1;
                }else{
                    high = mid;
                }
            }else{
                if(nums[mid-1]==nums[mid]){
                    low=mid+1;
                }else{
                    high = mid;
                }
            }
            
        }
        return nums[low];
    }
    };