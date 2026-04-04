class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(char c : s){
            if(c == '('){
                st.push(c);
            }
            if(c == '['){
                st.push(c);
            }
            if(c == '{'){
                st.push(c);
            }

            if(c == ')'){
                if(st.empty()){
                    return false;
                }
                if(st.top() == '('){
                    st.pop();
                }
                else{
                    return false;
                }
            }

            if(c == ']'){
                if(st.empty()){
                    return false;
                }
                if(st.top() == '['){
                    st.pop();
                }
                else{
                    return false;
                }
            }

            if(c == '}'){
                if(st.empty()){
                    return false;
                }
                if(st.top() == '{'){
                    st.pop();
                }
                else{
                    return false;
                }
            }
        }
        return st.empty();
    }
};
