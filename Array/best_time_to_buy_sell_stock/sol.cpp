// o[n] time complexity approch 
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int index=INT_MAX;
        int maxp=0;
        int n=prices.size();
        for(int i=0;i<n;i++){
            index=min(index,prices[i]);
            maxp=max(maxp,(prices[i]-index));
        }
        return maxp;  
    }
};
//o[n2] approch
class Solution {
public:
    int maxProfit(vector<int>& prices) {
int index;
int maxp=0;
for(int i=0;i<n-1;i++){
    buy_p=prices[i];
    for(int j=i+1;j<n;j++){
        s_price=prices[j];
        maxp=max(maxp,(s_price-buy_p));
    }
}
        return maxp;  
    }
};

