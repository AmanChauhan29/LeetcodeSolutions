class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> ans;
        string res = "";
        int n = s.size();
        for(int i=0; i<n; i++){
            if(ans.empty()){
                ans.push(s[i]);
            }
            else{
                if(ans.top() == s[i]){
                    // int ele = ans.top();
                    ans.pop();
                }
                else{
                    ans.push(s[i]);
                }
            }

        }
        while(!ans.empty()){
            int ele = ans.top();
            res += ele;
            ans.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};