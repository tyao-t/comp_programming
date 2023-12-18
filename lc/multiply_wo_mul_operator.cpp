class Solution {
public:
    int multiply(int A, int B) {
        if (B == 0) return 0;
        if (B == 1) return A;
        if (B % 2 == 0) {
            int half = multiply(A, B >> 1); 
            return half << 1;
        } else {
            int half = multiply(A, B >> 1);
            return (half << 1) + A;
        }
    }
};