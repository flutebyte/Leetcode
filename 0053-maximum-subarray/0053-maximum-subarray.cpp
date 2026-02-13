class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_elem =INT_MIN;
        //Brute force
        // for(int i=0; i<nums.size();i++){
        //     int sum = 0;
        //     for(int j=i; j>=0; j--){
        //             sum+=nums[j];
        //             max_elem = max(max_elem,sum);
        //         }
        //     }
            int sum = 0;
            for(int i=0; i<nums.size();i++){
                sum+=nums[i];
                max_elem = max(max_elem,sum);
                if(sum<0){
                    sum=0;
                }
            }
        
        return max_elem;
    }
};