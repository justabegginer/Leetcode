#include <iostream>
#include <cmath>

using namespace std;

int decimal(int b){
    int i = 0;
    int d = 0;
    while(b>0){
        int lastdigit = b%10; 
        d = d + lastdigit * pow(2,i);
        i++;
        b = b/10;
    }
    return d;
}

int main(){
    int b;
    cin >> b;

    cout << decimal(b) << endl;

    return 0;
}