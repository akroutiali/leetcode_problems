class Solution {
public:
    bool isValid(string s) {
        //the good idea is to use stack 
        int index =0;
        stack<char>st;
        
        while(index<s.size())
        {
            if(s[index]=='(' || s[index]=='{' || s[index]=='[')
            {
                st.push(s[index]);
            }
            else
            {
                if(st.empty())
                    return false;
                else if(s[index]==')')
                {
                    if(st.top()!='(')
                        return false;
                    else
                        st.pop();
                }
                else if(s[index]==']')
                {
                   if(st.top()!='[')
                      return false;
                    else
                        st.pop();
                }
                if(s[index]=='}')
                {
                    if( st.top()!='{')
                       return false;
                    else
                        st.pop();
                }
             }
            index++;
        }
        if(st.empty())
            return true;
        else
            return false;
    }
};
