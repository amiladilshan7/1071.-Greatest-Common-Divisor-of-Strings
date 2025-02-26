#include <iostream>
#include <numeric>  
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
    cout << solution.gcdOfStrings("ABCABC", "ABC") << endl;  
    cout << solution.gcdOfStrings("ABABAB", "ABAB") << endl;  
    cout << solution.gcdOfStrings("LEET", "CODE") << endl;    
    return 0;
}
