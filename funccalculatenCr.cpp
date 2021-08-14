#include <iostream>
using namespace std;

int fact(int n){
    if(n == 0)
        return 1;
    else
        return n*fact(n-1);
}

float calc(int n, int r){
    return fact(n)/(fact(n-r)*fact(r));
}

int main(){
    int n,r;
    cin>> n >> r;
    if(n>=r)
        cout << calc(n,r) << endl;
    else
        cout << "invalid input" << endl;
    return 0;
}