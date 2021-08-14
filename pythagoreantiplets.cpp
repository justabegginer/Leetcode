#include <iostream>
using namespace std;

bool check(int x,int y, int z){
    if(x>y && x>z){
        if(x*x == y*y + z*z){
            return true;
        }else{
            return false;
        }
    }else if(y>x && y>z){
        if(y*y == x*x + z*z){
            return true;
        }else{
            return false;
        }
    }
    else if(z>x && z>y){
        if(z*z == x*x + y*y){
            return true;
        }else{
            return false;
        }
    }
}

int main(){
    int x,y,z;
    cin >> x >> y >> z;   
    if(check(x,y,z))
    {
        cout << "Pythagorean triplet";
    }
    else{
        cout << "Not a Pythagorean triplet";
    }
    return 0;
}