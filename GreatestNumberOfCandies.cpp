#include <bits/stdc++.h>
using namespace std;

vector<bool> kidWithCandies(vector<int>& candies, int extraCandies){
    vector<bool> vec{};
    for(int count=0;count<candies.size();count++){
            candies[count] += extraCandies;
            int max = *max_element(candies.begin(),candies.end());
            if(candies[count]==max)
                vec.push_back(true);
            else
                vec.push_back(false);
        }
        return vec;
}

int main(){
    int n;
    cin>>n;

    vector<int> candies(n);

    int extraCandies{};
    cin>>extraCandies;

    cout<<kidWithCandies(candies,extraCandies);
}