class Solution {
public:
    bool backspaceCompare(string S, string T) {
        string a, b;
        int n = S.size();
        int m = T.size();
        for(int i = 0; i < n ; i++){
            if(S[i] != '#'){
                a += S[i];
            } else{
                if(a != "") a = a.substr(0, a.size() - 1);
            }
        }
        for(int i = 0; i < m ; i++){
            if(T[i] != '#'){
                b += T[i];
            } else{
                if(b != "") b = b.substr(0, b.size() - 1);
            }
        }
        return a == b; 
    }
};
