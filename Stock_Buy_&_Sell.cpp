class Solution {
    public:
        int maxProfit(vector<int>& prices) {
            int profit=0;
            int sell=0;
            int buy=prices[0];
            for(int i=1;i<prices.size();i++)
            {
                buy=min(buy,prices[i-1]);
                sell=prices[i]-buy;
                profit=max(profit,sell);
            }
            return profit;
        }
    };

    /*ae problem e amake daily selling day hisabe vabte hobe. ajker ager diner min price ke buy price dhorte hobe.
    and aj sell korle profit koto hobe ata calculate kore return korte hobe*/