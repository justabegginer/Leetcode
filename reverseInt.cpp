class Solution {
public:
    int reverse(int x) {
        int rev{0};
        do{
            int lastdigit = x%2;
            rev = rev*10 + lastdigit;
            x = x/10;
        }while(x>0);
        return rev;
    }
};