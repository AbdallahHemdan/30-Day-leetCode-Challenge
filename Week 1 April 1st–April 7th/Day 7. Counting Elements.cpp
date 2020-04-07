const int maxn = 1005;
int frq[maxn];
class Solution {
public:
        int countElements(vector<int>& arr) {
            memset(frq, 0, sizeof frq);
            for (int i = 0; i < arr.size(); i++) {
                frq[arr[i]]++;
            }
            int ret = 0;
            for (int i = 0; i < maxn; i++) {
                if (frq[i] && frq[i + 1]) {
                    ret += frq[i];
                }
            }
            return ret;
        }
};
