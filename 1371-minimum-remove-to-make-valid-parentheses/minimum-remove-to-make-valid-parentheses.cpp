class Solution {
public:
    string minRemoveToMakeValid(string s) {
        cin.tie(nullptr);
        cout.tie(nullptr);
        ios_base::sync_with_stdio(false);
        int leftCount = 0;
        int rightCount = 0;
        stack<char> stack;

        // Pass 1
        for (char ch : s) {
            if (ch == '(') {
                leftCount++;
            } else if (ch == ')') {
                rightCount++;
            }
            if (rightCount > leftCount) {
                rightCount--;
                continue;
            } else {
                stack.push(ch);
            }
        }

        string result = "";
        
        // Pass 2
        while (!stack.empty()) {
            char currentChar = stack.top();
            stack.pop();
            if (leftCount > rightCount && currentChar == '(') {
                leftCount--;
            } else {
                result += currentChar;
            }
        }

        // Reverse the result string
        reverse(result.begin(), result.end());
        return result;
    }
};