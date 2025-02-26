 # 1071.-Greatest-Common-Divisor-of-Strings


 # Greatest Common Divisor of Strings (C++ Solution)

##  Problem Statement
Given two strings `str1` and `str2`, return the largest string `x` such that `x` divides both `str1` and `str2`.

## 🛠 Approach
1. If `str1 + str2` is **not equal** to `str2 + str1`, return `""` (no common divisor).
2. Find `gcd(len(str1), len(str2))` using `std::gcd()`.
3. The answer is the **first GCD-length characters** of `str1`.

## 📌 Code Implementation
```cpp
#include <iostream>
#include <numeric>  // For std::gcd
using namespace std;

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if (str1 + str2 != str2 + str1) return "";
        int length_gcd = gcd(str1.length(), str2.length());
        return str1.substr(0, length_gcd);
    }
};

int main() {
    Solution solution;
    cout << solution.gcdOfStrings("ABCABC", "ABC") << endl;  // Output: "ABC"
    cout << solution.gcdOfStrings("ABABAB", "ABAB") << endl;  // Output: "AB"
    cout << solution.gcdOfStrings("LEET", "CODE") << endl;    // Output: ""
    return 0;
}

## Explanation
* str1 + str2 == str2 + str1 ensures both strings share a repeating pattern.
* std::gcd() finds the length of the largest common divisor.
* str1.substr(0, gcd_length) extracts the repeating unit.
