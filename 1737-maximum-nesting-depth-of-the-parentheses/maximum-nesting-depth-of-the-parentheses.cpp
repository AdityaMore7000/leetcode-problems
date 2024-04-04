class Solution {
public:
    int maxDepth(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        int ans=0, p=0;
        for(char c: s){
            p+=(c=='(')-(c==')');
            ans=max(ans, p);
        }
        return ans; 
    }
};