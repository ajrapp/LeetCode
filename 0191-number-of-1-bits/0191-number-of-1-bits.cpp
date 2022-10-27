class Solution {
public:
    int hammingWeight(uint32_t n) {
        std::string r;
        while(n!=0) {r=(n%2==0 ?"0":"1")+r; n/=2;}
        
        int count = 0;
        for (size_t i = 0; i < r.size(); i++) {
            if (r[i] == '1') {
                count++;
            }
        }
        return count;
    }
};