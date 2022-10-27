class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for (size_t i = 0; i < stones.size(); i++) {
            pq.push(stones[i]);
        }
        
        while (pq.size() > 1) {
            int first = pq.top();
            pq.pop();
            int second = pq.top();
            pq.pop();
            if (first > second) {
                pq.push(first - second);
            }
        }
        
        if (pq.empty()) {
            return 0;
        }
        return pq.top();
    }
};