class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        
        for(int i=0; i<numRows; i++){
            vector<int>ans;
            for(int j=0; j<=i; j++){
                if(j==0|| j==i) ans.push_back(1);
                else{
                    int m=i-1;
                    int n=j-1;
                    if(m<0) m=0;
                    if(n<0) n=0;
                    int sum = res[m][n]+res[m][j];
                    ans.push_back(sum);
                }
            }
            res.push_back(ans);
        }
        return res;
    }
};