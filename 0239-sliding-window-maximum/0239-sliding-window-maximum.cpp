class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        // vector<int>ans;
        
        // for(int i=0; i<=nums.size()-k;i++){
        //     int maxx=nums[i];
        //     for(int j=i; j<i+3;j++){
        //         if(j<nums.size()){
        //             maxx=max(maxx, nums[j]);
        //         } 
        //     }
            
        //     ans.push_back(maxx);
        // }
        // return ans;

        vector<int>ans; deque<int>dq;
        for(int i=0; i<nums.size();i++){
            if(!dq.empty() && dq.front()<=i-k){
                dq.pop_front();
            }
            while(!dq.empty() && nums[i]>nums[dq.back()]){
                dq.pop_back();
            }
            dq.push_back(i);
            if(i>=k-1){
                ans.push_back(nums[dq.front()]);
            }
        }
        return ans;
    }
};