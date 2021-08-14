#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max{0},min{0};
    max = INT_MIN;    //Inititalizes the max variable to the minimum value cpp can assign to the variable  #include<climits>
    min = INT_MAX;    //Inititalizes the min variable to the maximum value cpp can assign to the variable
    for(int i=0;i<n;i++){
        if(arr[i]>max)
            max = arr[i]; 
        if(arr[i]<min)
            min = arr[i];
    }

/*
    for(int i=0;i<n;i++){
        max = max(max,arr[i]);
        min = min(min,arr[i]);
    }
*/
    cout << "Maximum value:" << max << endl;
    cout << "Minimum value:" << min << endl;
    return 0;
}