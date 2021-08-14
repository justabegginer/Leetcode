#include <iostream>
using namespace std;

// int fact(int n){
//     if(n == 0)
//         return 1;
//     else
//         return n*fact(n-1);
// }

int fact(int n){
    int num = 1;
    int product = 1;
    while(num<=n){
        product = product * num;
        num++;
    }
    return product;
}

int main(){
    int n;
    cin >> n;

    cout << fact(n) << endl;

    return 0;
}