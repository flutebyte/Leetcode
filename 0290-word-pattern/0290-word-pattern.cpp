class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string>mpp;
        vector<string> words;
        string temp = "";
        for (char c : s) {
            if (c== ' ') {
                words.push_back(temp);
                temp = "";
            } else {
                temp += c;
            }
        }
        words.push_back(temp); 
        if (words.size() != pattern.size()) return false;
        unordered_map<string,char> maa;
        for(int i=0; i<words.size(); i++){
            char c= pattern[i];
            string word = words[i];
            if(mpp.count(c)){
                if(mpp[c]!= word) return false;
            }else{
                for(auto &it : mpp){
                    if(it.second == word) return false;
                }
                mpp[c]= word;
            }
        }
        return true;
    }
};