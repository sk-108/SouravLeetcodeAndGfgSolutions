class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int>st;
        int k = stoi(ops[0]);
        st.push(k);
        vector<int>tmp;
        tmp.push_back(k);
        for(int i=1;i<ops.size();i++)
        {
            int t;
            if(!st.empty())
                  t = st.top();
           
                if(ops[i]=="C")
                {
                    st.pop();
                    tmp.pop_back();
                }
                else if(ops[i] ==  "D")
                    
                {
                    st.push(t*2);
                    tmp.push_back(t*2);
                }
                else if(ops[i] == "+")
                {
                    int ans = 0;
                    ans = t+tmp[tmp.size()-2];
                    st.push(ans);
                    tmp.push_back(ans);
                }
                else{
                    int k = stoi(ops[i]);
                    st.push(k);
                    tmp.push_back(k);
                }
            
        }
        int sum = 0;
        while(!st.empty())
        {
            sum += st.top()            ;
            st.pop();
        }
        return sum;
    }
};