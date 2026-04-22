class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>ans;
        
        // for(int i=0; i<intervals.size()-1;i++){
        //     vector<int>res;
        //     if(intervals[i][1]>=intervals[i+1][0]){
        //         int left= min(intervals[i][0], intervals[i+1][0]);
        //         int right = max(intervals[i][1], intervals[i+1][1]);
        //         res.push_back(left);
        //         res.push_back(right);
        //         i++;
        //     }else{
        //         res.push_back(intervals[i][0]);
        //         res.push_back(intervals[i][1]);
        //     }
        //     ans.push_back(res);
        // }
        // return ans;
        sort(intervals.begin(), intervals.end());
        for(auto it:intervals){
            if(ans.empty() || it[0] > ans.back()[1]) {
                ans.push_back(it);
            } else {
                ans.back()[1] = max(ans.back()[1], it[1]);
            }
        }
        return ans;
    }
};