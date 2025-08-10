class Solution {
public:
    bool isPalindrome(int x) {
        int temp=x;
        long  rev=0;
        int d;
        if(x<0) return false;
        while(temp)
        {
               d=temp%10;
               rev=rev*10+d;
               temp=temp/10;
        }
        return (rev==x);
    }
};