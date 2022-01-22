class Solution {
public:

    bool isPalindrome(int x) {
        int n=x;
        int val=0;
        int res=0;

        while(n>0)
        {
            res=n%10;
            n=n/10;
            val=(val*10)+res;
            cout<<"val=="<<val<<endl;
            
        }
        if(val==x)
            return true;
        else
            return false;
    }
};
/*
323

how to get 3
3=323%10=3
x=323%10=32
2=32%10
3=3%10

*/
