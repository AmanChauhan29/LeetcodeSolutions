class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(auto x: tokens){
            if(x=="+" || x=="-" || x=="*" || x=="/"){
                int op2 = st.top();
                st.pop();
                int op1 = st.top();
                st.pop();
                if(x == "+"){
                    st.push(op2+op1);
                }
                 if(x == "-"){
                    st.push(op1-op2);
                }
                 if(x == "*"){
                    st.push(op1*op2);
                }
                 if(x == "/"){
                    st.push(op1/op2);
                }
            }
            else{
                int temp = stoi(x);
                st.push(temp);
            }
        }
        return st.top();
    }
};