#include<iostream>
#include<stack>
using namespace std;

bool findRedundantBrackets(string &s){
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        if(ch=='(' || ch=='+' || ch=='-' || ch=='*' || ch=='/'){
            st.push(ch);
        }else{
            if(ch==')'){
                bool isRedundant = true;
                while (st.top() != '(')
                {
                    char ch = st.top();
                    if(ch=='+' || ch=='-' || ch=='*' || ch=='/'){
                        isRedundant = false;
                    }
                    st.pop();
                }
                if(isRedundant)
                    return true;
                st.pop();
            }
        }
    }
    return false;
}