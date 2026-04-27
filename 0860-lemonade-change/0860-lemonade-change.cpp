class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int fch=0, tch=0, twch=0;
        for(int i=0; i<bills.size(); i++){
            if(bills[i]==5){
                fch++;
            }else if(bills[i]==10){
                tch++;
                if(fch>0)fch--;
                else return false;
            }else{
                twch++;
                if(tch>0 && fch>0){
                    tch--;fch--;
                }else if(fch>=3){
                    fch-=3;
                }else{
                    return false;
                }
            }
        }
        return true;
    }
};