class Solution {
public:
    string reversePrefix(string word, char ch) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        int j = word.find(ch);
        if (j != -1) {
            reverse(word.begin(), word.begin() + j + 1);
        }
        return word;
    }
};