class Solution {
public:
    bool isPalindrome(int x) {
        int lastDig = 0;
        long dup = x;
        long revnum;

        while(x>0){
            lastDig = x%10;
            revnum = (revnum*10)+lastDig;
            x = x/10;
        }
        if(revnum== dup){
            return true;
        }
        else{
            return false;
        }
    }
};