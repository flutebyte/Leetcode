class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
    //     vector<int> count;
    //     int j=0;
    //     int index;
    //     for(int i=0; i<nums.size(); i++){
    //         if(nums[i]==nums[i+1]){
    //             count[j]++;
    //         }else{
    //             j++;
    //             count[j]++;
    //         }
    //     }
    //     for(int i=0; i<count.size();i++){
    //         if (count[i]>nums.size()/2){
    //             index= nums[nums.size()/2];
    //         }
    //     }
    //     return nums[index];
    // }
        return nums[nums.size()/2];
    }
};