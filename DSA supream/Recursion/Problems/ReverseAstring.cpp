#include <iostream>
using namespace std;

string R(string str, int s, int e) {
    if (s >= e) {
        return str;
    }
    swap(str[s], str[e]);

    // Corrected: Added check before making recursive call
    // if (s + 1 <= e - 1) {
        return R(str, s + 1, e - 1);
    // // } 
    // else {
    //     return str;
    // }
}

int main() {
    string str = "Good";
    int s = 0;
    int e = str.length() - 1;
    string k = R(str, s, e);
    cout << k << endl;

    return 0;
}