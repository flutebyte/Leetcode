class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>ans= nums;
        // for(int i=0; i<nums.size();i++){
        //     int count=0;
        //     for(int j=0; j<nums.size();j++){
        //         if(j==i) continue;
        //         if(nums[j]<nums[i])count++;
        //     }
        //     ans.push_back(count);
        // }
        sort(ans.begin(),ans.end());
        unordered_map<int,int> mpp;
        for(int i=0; i<ans.size();i++){
            if(mpp.find(ans[i])==mpp.end()){
                mpp[ans[i]]=i;
            }
        }
        vector<int> res;
        for(int x: nums){
            res.push_back(mpp[x]);
        }
        return res;
    }
};