class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string f;
        int a{0};
        while(a<indices.size()){
            for(int i=0;i<indices.size();i++){
                if(indices[i]==a){
                    char a = s.at(i);
                    f.push_back(a);
                }
            }
            a++;
        }
        return f;
    }
};