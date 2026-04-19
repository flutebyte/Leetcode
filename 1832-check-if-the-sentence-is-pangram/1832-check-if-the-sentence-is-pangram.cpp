class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<char, int > mpp;
        string alp = "abcdefghijklmnopqrstuvwxyz";
        for(char c:alp){
            mpp[c]=0;
        }
        for(char c:sentence){
            mpp[c]++;
        }
        for(char c:alp){
            if(mpp[c]==0) return false;
        }
        return true;
    }
};