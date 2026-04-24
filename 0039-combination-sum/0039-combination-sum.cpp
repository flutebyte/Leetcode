class Solution {
public:
    vector<vector<int>> ans;
    vector<int> res;

    void sum(int ind, int target, vector<int>& c){
        if(target == 0){
            ans.push_back(res);
            return;
        }
        if(target < 0) return;

        for(int i = ind; i < c.size(); i++){
            res.push_back(c[i]);
            sum(i, target - c[i], c);
            res.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int>& c, int target) {
        sum(0, target, c);
        return ans;
    }
};