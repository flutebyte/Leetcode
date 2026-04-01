class Solution {
public:
    int getNext(int n){
        int summ = 0;
        while(n > 0){
            int num = n % 10;
            summ += num * num;
            n /= 10;
        }
        return summ;
    }
    bool isHappy(int n) {
        int s = n;
        int f = getNext(n);

        while(f != 1 && s != f){
            s = getNext(s);
            f = getNext(getNext(f));
        }

        return f == 1;
    }
};