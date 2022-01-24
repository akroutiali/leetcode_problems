class Solution {
public:

    int myAtoi(string s) {
//check if string is empty
        if(s.empty())
            return 0;
        bool isstop=false;
        long result=0;
        char flag='+';
   for(int i=0;i<s.size();i++)
   {
       //check if the caracter is not white space to retrieve the number
       if(s[i] != ' ')
       {
           //check if the number is signed
           if(s[i]=='-')
           {
               flag='-';
               i++;
           }
           else if(s[i]=='+')
           {
               i++;
           }
           //iterate throw the character  in the string and update result if the character is between [09] updadate the result else break and don't complete the processing 
           while(i<s.size())
           {
               if(!(s[i]>='0' && s[i]<='9'))
               {
                   isstop=true;
                   break;
               }
               if(result>pow(2,31)-1)
                   break;
               result=result*10+(s[i]-'0');
               i++;
           }
       }
       if(isstop)
           break;
   }
        if(flag=='-')
            result=-result;
        if(result<INT_MIN)
            return INT_MIN;
        else if(result>INT_MAX)
            return INT_MAX;
        return (int)result;
        
    }
};
