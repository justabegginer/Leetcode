#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n;
    int i=2;
    int count = 0;
    cout << "Enter the number:";
    cin >> n;
    while(i<sqrt(n)){
        if(n%i == 0){
            count = count + 1;
        }
        i++;
    }
    if(count == 0){
        cout << "The number is Prime"<<endl;
    }else{
        cout << "The number is Non-Prime"<<endl;
    }
    return 0;
}