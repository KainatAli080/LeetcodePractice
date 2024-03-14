class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t reversedNum = 0;
        for(int i=0; i<32; i++){
            reversedNum <<= 1;
            int leastSignificantBit = n&1;
            reversedNum |= leastSignificantBit;
            n >>=1;
        }
        return reversedNum;
    }
};