#include <iostream>
using namespace std;

int main(){
    int n;
    int r = 1;
    cout << "Enter the number of rows:";
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout << r << " ";
            r++;
        }
        cout << endl;
    }
    return 0;
}