class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n= nums.size();
        int ans=nums[0] + nums[1] + nums[2];;
        sort(nums.begin(),nums.end());
        for(int i=0; i<n; i++){
            int l= i+1, r=n-1;
            while(l<r){
                int cs=nums[l]+nums[r]+nums[i];
                if(abs(cs - target) < abs(ans - target)) {
                    ans = cs;
                }
                if(cs==target){
                    return cs;
                }
                else if(cs<target){
                    l++;
                }
                else r--;
            }
        }
        return ans;
    }
};