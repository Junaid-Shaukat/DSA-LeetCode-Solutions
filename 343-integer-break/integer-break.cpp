class Solution {
public:
    int integerBreak(int n) {
      // If n is less than or equal to 3, the maximum product is always n-1
    if (n <= 3) return n - 1;

    int product = 1;

    // While n is greater than 4, keep multiplying the product by 3 and reduce n by 3
    while (n > 4) {
        product *= 3;
        n -= 3;
    }

    // Finally, multiply the remaining n with the product
    product *= n;

    return product;
}
};