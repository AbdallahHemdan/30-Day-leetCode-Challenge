class Solution {
public:
    string stringShift(string s, vector<vector<int>>& shift) {
        for(auto item : shift){
            int dir = item[0];
            int amount = item[1];
            if(dir == 0){ // left
                s = s.substr(amount) + s.substr(0,amount);
            }else{ // right
                s = s.substr(s.size() - amount) + s.substr(0,s.size() - amount);
            }
        }
        return s;
    }
};
