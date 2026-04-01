class Solution {
public:
    int lengthOfLastWord(string s) {
        bool wordf = false;
        int count=0;
        for(int i=s.size()-1;i>=0;i--){
            if(isalpha(s[i])){
                count++;
                wordf = true;
            }
            if(s[i]==' ' && wordf==true) break;
            if(s[i]==' ' && wordf ==false) continue;
        }
        return count;
    }
};