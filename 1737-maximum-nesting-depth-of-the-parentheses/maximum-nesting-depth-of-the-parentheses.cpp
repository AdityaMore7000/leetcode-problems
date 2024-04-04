class Solution {
public:
    int maxDepth(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        int maximum = 0,count = 0;
        for(int i = 0;i<s.length();i++){
            if(s[i] == '(') count++;
            if(s[i] == ')') count--;
            maximum = max(count,maximum);
        }
        return maximum;
    }
};