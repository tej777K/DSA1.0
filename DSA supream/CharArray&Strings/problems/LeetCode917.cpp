#include <iostream>
#include <cctype>

using namespace std;

class Solution {
public:
    string reverseOnlyLetters(string s) {
        for (int i = 0, j = s.size() - 1; i < j; i++, j--) {
            if (isalpha(s[i]) && isalpha(s[j])) {
                swap(s[i], s[j]);
            } else {
                if (isalpha(s[i])) {
                    i--;
                }
                if (isalpha(s[j])) {
                    j--;
                }
            }
        } 

        return s;
    }
};

int main() {
    Solution sol;
    string input = "a-bC-dEf-ghIj";
    string result = sol.reverseOnlyLetters(input);
    cout << result << endl;

    return 0;
}
