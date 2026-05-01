class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string>ans;
        // int maxx=max(target.begin(), target.end());
        // for(int i=1; i<=n;i++){
        //     if(i>maxx){return ans;}
        //     if(find(target.begin(), target.end(), i)==target.end()){
        //         ans.push_back("Push");
        //         ans.push_back("Pop");
        //     }else{
        //         ans.push_back("Push");
        //     }
        // }
        int j=0;
        for(int i=1; i<=n;i++){
            if(j>=target.size()){return ans;}
            if(i==target[j]){
                ans.push_back("Push");
                j++;
            }else{
                ans.push_back("Push");
                ans.push_back("Pop");
            }
        }
        return ans;
    }
};