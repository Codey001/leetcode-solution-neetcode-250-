class Solution {
public:
    int minInsertions(string s) {
        stack<char> st;
        for(auto ch : s){
            if(ch == '(' || st.size() == 0){
                st.push(ch);
            }else{  // ch == )
                if(st.top() == ')'){
                    //curr = st.top == ) - we need to check if there is ( after st.top
                    st.pop();
                    if(st.size() == 0){
                        st.push(ch);
                        st.push(ch);
                    }else{
                        if(st.top() == '('){
                            st.pop();
                        }else{
                            st.push(')');
                            st.push(')');
                        }
                    }
                }else{
                    st.push(ch);
                }

            }
        }

        int operations = 0;

        while(!st.empty()){
            if(st.top() == '('){
                operations += 2;
                st.pop();
            }else{ // top )
                st.pop();
                if(!st.empty()){
                    st.pop();
                    operations += 1;
                }else{
                    operations += 2;
                    st.pop();
                }
            }
        }

        return operations;
    }
};