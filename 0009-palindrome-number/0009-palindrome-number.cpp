class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            cout << "Number Negative, no palindrome.";
            return false;
        }
        else{
            int rev = reverseInteger(x);
            return (x == rev);
        }
    }
    
    int reverseInteger(int x){
        long int rev = 0;
        long int temp = x;
        
        while(temp != 0){
            rev = (rev * 10) + (temp % 10);
            temp /= 10;
        }
        return rev;
    }
};