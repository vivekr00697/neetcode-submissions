class Solution {
public:
    bool isValid(string s) {
        char st[10000];
        int top = -1;

        for (char c : s) {
            if (c == '(' || c == '[' || c == '{') {
                st[++top] = c;
            } else {
                if (top == -1) return false;

                if ((c == ')' && st[top] != '(') ||
                    (c == ']' && st[top] != '[') ||
                    (c == '}' && st[top] != '{'))
                    return false;

                top--;
            }
        }

        return top == -1;
    }
};