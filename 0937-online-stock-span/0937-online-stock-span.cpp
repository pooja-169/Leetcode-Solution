class StockSpanner {
public:
    vector<int>prices;
    StockSpanner() {
        

    }
    
    int next(int price) {
        prices.push_back(price);
        int ct=1,i=prices.size()-2;
        while(i>=0 and prices[i--] <=price) ct++;
        return ct;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */