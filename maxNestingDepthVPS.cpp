class Solution {
public:
    int maxDepth(string s) {
        int ans = 0;
        int openBrackets = 0;
        for(auto current : s){
            if(current == '(') openBrackets++;
            else if(current == ')') openBrackets--;

            ans = max(ans, openBrackets);
        }
        return ans;  
    }
};