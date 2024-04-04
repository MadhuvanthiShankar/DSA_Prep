class Solution {
    void addPara(vector<string>& ans, int open, int close, int n, string curr){
        if(curr.length() == 2*n)
            ans.push_back(curr);
        else{
            if(open < n)
                addPara(ans, open + 1, close, n, curr+"(");
            if(close < open )
                addPara(ans, open, close + 1, n, curr+")");
        }
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        addPara(ans, 0, 0, n,"");
        return ans;
    }
};