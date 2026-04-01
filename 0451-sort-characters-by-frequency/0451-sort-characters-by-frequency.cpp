class Solution {
public:
    static bool compare(pair<int,char>p, pair<int,char>q){
            if(p.first>q.first) return true;
            if(p.first<q.first) return false;
            return p.second<q.second;
    }
    string frequencySort(string s) {
        // unordered_map<char,int> mpp;
        // for(auto i:s){ mpp[i]++;}
        // vector<vector<char>> ds(s.size()+1);
        // for(auto it:mpp){
        //     int freq = it.second; char ch = it.first;
        //     ds[freq].push_back(ch);
        // }
        // string ans = "";
        // for(int i= s.size()-1; i>=0; i--){ for(auto it: ds[i]){
        //     ans.append(i,it);
        // }}
        // return ans;
        

        pair<int,char> ds[256];
        for(int i=0; i<256; i++){
            ds[i]={0,(char)i};
        }
        for(char ch : s){
            ds[ch].first++;
        }
        sort(ds,ds+256, compare);
        string ans = "";
        int i=0;
        while(i < 256 && ds[i].first > 0){
            ans += ds[i].second;
            ds[i].first--;
            if(ds[i].first == 0) i++;
        }
        
        return ans;
    }
};