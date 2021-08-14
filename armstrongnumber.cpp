#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n1,n2;
    int num = 0;
    cout << "Enter the numeber you want to check:";
    cin >> n1;
    n2 = n1;
    while(n1>0){
        int digit = n1%10;
        num = num + pow(digit,3);
        n1 = n1/10;
    }
    if(num == n2)
        cout << "Armstrong Number" << endl;
    else
        cout << "Not an Armstrong Number" << endl;
    return 0;
}