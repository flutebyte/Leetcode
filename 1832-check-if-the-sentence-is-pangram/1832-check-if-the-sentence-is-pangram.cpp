class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<char, int > mpp;
        // string alp = "abcdefghijklmnopqrstuvwxyz";
        // for(char c:alp){
        //     mpp[c]=0;
        // }
        // for(char c:sentence){
        //     mpp[c]++;
        // }
        // for(char c:alp){
        //     if(mpp[c]==0) return false;
        // }
        // return true;
        int count =0;
        for(char c:sentence){
            auto it = mpp.find(c);
            if(it==mpp.end()){
                mpp[c]++;
                count++;
            }
            else continue;
        }
        if(count==26) return true;
        return false;
    }
};