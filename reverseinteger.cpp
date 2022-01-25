class Solution {
public:
    //reverse integer

        
    int reverse(int x) {
        long n=x;
        long result=0;
        bool isneg=false;
        cout<<"n=="<<n<<endl;
        if(n)
        if(n<0)
        {
            n=-n;
            isneg=true;
            
        }
        while(n>0)
        {
            int val=n%10;
            n=n/10;
            result=result*10+val;
        }
        if(isneg)
            result=result*-1;
        
        if(result>INT_MAX)
            return 0;
        else if (result<INT_MIN)
            return 0;
        return (int)result;
    }
};
