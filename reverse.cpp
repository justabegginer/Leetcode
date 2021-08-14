#include <bits/stdc++.h>
using namespace std;

int reverse(int x){
    int rev{0};
    if(x>=0){
        while(x>0){
            int lastdigit = x%10;
            rev = rev*10 + lastdigit;
            x = x/10;
        }
    }
    else{
        while(x<0){
            int lastdigit = x%10-10;
            rev = rev*10 + lastdigit;
            x = x/10 + 1;
        }
    }
    return rev;
}

int main(){
    int a{0};
    cin >> a;
    cout << reverse(a);
    return 0; 
}