class Solution {
public:

    /*
    121
    121
    
    
    1:121/10=12/10=1
    */
    void getdigits(vector<int>&v,int n)
    {
        if(n>9)
        {
            getdigits(v,n/10);
        }
        v.push_back(n%10);
        
    }
    bool isPalindrome(int x) {
        vector<int>v;
        getdigits(v,x);
        int start=0;
        int end=v.size()-1;
        while(start<=end)
        {
            if(v[start] != v[end])
                return false;
            start++;
            end--;
        }
        return true;
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
