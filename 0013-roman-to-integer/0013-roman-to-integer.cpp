class Solution {
public:
    int romanToInt(string s) {
        int res=0;
        unordered_map<char, int> dict;
        dict['I']=1;
        dict['V']=5;
        dict['X']=10;
        dict['L']=50;
        dict['C']=100;
        dict['D']=500;
        dict['M']=1000;
        for(int i=0;i<s.size();i++){
        auto it = dict.find(s[i]);
        int curr = dict[s[i]];
        int next= dict[s[i+1]];
        if(curr>=next){
            res+=curr;
        }else{
            int x= next-curr;
            res+=x;
            i++;
        }
    }
        return res;
    }
};