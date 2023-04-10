class Solution {
public:
    bool isValid(string s) {
        // stack<char> temp;
        // char ch;
        // for(int i=0;i<s.length();i++)
        // {
        //     if(s[i]=='{' || s[i]=='(' || s[i]=='[')
        //     {
        //         temp.push(s[i]);
        //         continue;
        //     }
        //     if(s.empty())
        //         return false;
        //         switch(s[i])
        //         {
        //             case ')': 
        //                 ch=temp.top();
        //                 temp.pop();
        //                 if(ch=='{' || ch=='[')
        //                     return false;
        //                     break;
        //             case '}':
        //                 ch=temp.top();
        //                 temp.pop();
        //                 if(ch=='(' || ch=='[')
        //                     return false;
        //                     break;
        //             case ']':
        //                 ch=temp.top();
        //                 temp.pop();
        //                 if(ch=='{' || ch=='(')
        //                     return false;
        //                     break;
        //         }
        // }
        // return(temp.empty());
         stack<char> temp;
   char ch;
   for (int i=0; i<s.length(); i++) {    
      if (s[i]=='('||s[i]=='['||s[i]=='{') {    
         temp.push(s[i]);
         continue;
      }
      if (temp.empty())    
         return false;
      switch (s[i]) {
            case ')':    
               ch = temp.top();
               temp.pop();
               if (ch=='{' || ch=='[')
                  return false;
                  break;
            case '}': 
               ch = temp.top();
               temp.pop();
               if (ch=='(' || ch=='[')
                  return false;
                  break;
            case ']': 
               ch = temp.top();
               temp.pop();
               if (ch =='(' || ch == '{')
                  return false;
                  break;
         }
      }
      return (temp.empty()); 
    }
};
