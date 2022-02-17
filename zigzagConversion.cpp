class Solution {
public:
    string convert(string s, int numRows) {
   
        if(numRows==1)
            return s;
        
        string ans;
        int n=s.size();

        // first row 
        for(int i=0;i<n;i+=(numRows-1)*2)
            ans +=s[i];
        
        // rows between first and last row 
        int  start=1;
        while(start<numRows-1)
        {
            int index=start;
            bool check=false;
            while(index<s.size())
            {
                ans+=s[index];
                if(!check)
                {
                    index+=(numRows-1-start)*2;
                    check=true;
                }
                else
                {
                    index+=((numRows-1)*2)-((numRows-1-start)*2);
                        check=false;
                }
                
            }
            start++;
        }
        
        // end row
        for(int j=numRows-1;j<n;j+=(numRows-1)*2)
            ans+=s[j];

        return  ans;
    }
};
