int longestValidParentheses(string s) {
        stack<int> ind;
      ind.push(-1);
      int len = 0;
      stack<char> st;
      for(int i=0; i<s.size(); i++){
          if(s[i] == '('){
              ind.push(i);
              st.push('(');
          }
          else{
              if(st.empty()){
                  ind.push(i);
              }
              else{
                  st.pop();
                  ind.pop();
                  len = max(len, i-ind.top());
              }
          }
      }
      return len;
        
    }
