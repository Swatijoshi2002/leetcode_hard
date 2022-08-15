class Solution {
public:
    string str;
    int i=0;
   int func()
   {
       int sum=0,op=1;
       while(i<str.length())
       {
           if(str[i]==')')
               break;
           else if(str[i]=='(')
           {
               i++;
               sum+=op*func();
           }
           else if(str[i]=='+')
           {
               op=1;
           }
             else if(str[i]=='-')
           {
               op=-1;
           }
           else if(isdigit(str[i]))
           {
               string b_s="";
               while(isdigit(str[i]) && i<str.length())
               {
                   b_s+=str[i++];
                   cout<<b_s<<" ";
               }
             i--;
               sum+=stoi(b_s)*op;
           }
           i++;
       }
       return sum;
   }
   int calculate(string s) {
        str=s;
       return func();
    }
};
