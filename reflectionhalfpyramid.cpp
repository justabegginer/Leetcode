#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of rows:";
    cin >> n;
    for(int i = 1; i <= 2*n; i++ ){
        if(i<=n){
            for(int j = 1; j <=i ; j++){
                cout << "*";
            }
            cout << endl;
        }
        else{
            for(int j = 2*n; j >= i; j--){
                cout << "*";
            }
            cout << endl;
        }
        
    }
    return 0;
}