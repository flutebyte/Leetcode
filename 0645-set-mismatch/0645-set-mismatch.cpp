class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>res;
        unordered_map<int,int> ans;
        for(int i=0; i<nums.size(); i++){
            ans[nums[i]]++;
        }
        int n,m;
        for(int i=0; i<nums.size();i++){
            if(ans[i+1]==0){
                n=i+1;
            }
            if(ans[i+1]==2){
                m=i+1;
            }
        }
        res.push_back(m);
        res.push_back(n);
        return res;
    }
};