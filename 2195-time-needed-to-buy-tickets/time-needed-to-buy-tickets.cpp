class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        int ans = 0;
        for(int i = 0;i<tickets.size();i++){
            if(i<=k){
                ans+=min(tickets[k],tickets[i]);
            }
            else{
                ans += min(tickets[k]-1,tickets[i]);
            }
        }
        return ans;
    }
};