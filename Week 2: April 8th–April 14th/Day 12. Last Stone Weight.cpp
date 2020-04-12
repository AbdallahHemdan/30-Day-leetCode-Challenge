class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int, vector<int>> pq;
        for (int& i : stones) pq.push(i);
        while (pq.size() != 1 && !pq.empty()) {
            int u = pq.top();
            pq.pop();
            int v = pq.top();
            pq.pop();
            if (v == u) continue;
            else pq.push(u - v);
        }
        if (pq.empty()) return 0;
        return pq.top();
    }
};
