class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum=0;
        for(int i=0; i<k; i++){
            sum+=nums[i];
        }
        int maxx=sum;
        for(int i=1; i<=nums.size()-k;i++){
            sum-=nums[i-1];
            sum+=nums[i+k-1];
            maxx= max(sum,maxx);
        }
        return (double)maxx / k;
    }
};