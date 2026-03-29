class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        if (s1 == s2) return true;
        int i=0; int j=2;
        string temp = s1;
        swap(temp[0], temp[2]);
        if (temp == s2) return true;
        i++;j++;
        // temp = s1;
        swap(temp[i],temp[j]);
        if(temp == s2) return true;
        swap(s1[i],s1[j]);
        if(s1==s2) return true;
        return false;
    }
};