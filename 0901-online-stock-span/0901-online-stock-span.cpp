class StockSpanner {
public:
    stack<pair<int,int>> ans;
    StockSpanner() { 
    }
    
    int next(int price) {
        int span = 1;
        while(!ans.empty() && ans.top().first<=price){
            span+=ans.top().second;
            ans.pop();
        }
        ans.push({price,span});
        return span;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */