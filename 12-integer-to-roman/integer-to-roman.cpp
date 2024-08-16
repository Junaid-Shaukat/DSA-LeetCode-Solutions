class Solution {
public:
    string intToRoman(int num) {
    // Arrays to store the corresponding Roman numerals and their values
    string romanSymbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    
    string result = "";

    // Loop through the values array and append the corresponding symbols
    for (int i = 0; i < 13; i++) {
        while (num >= values[i]) {
            result += romanSymbols[i];
            num -= values[i];
        }
    }
    
    return result;
}
};