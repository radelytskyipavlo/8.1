#include <iostream>
#include <string>
using namespace std;

int CountThirdDots(const string& str) {
    int count = 0;
    int pos = 0;
    int k = 0;
    for (size_t i = 0; i < str.size(); i++) {
        if (str[i] == '.' && i >= 2 && str[i - 1] != '.' && str[i - 2] != '.') {
            count++;
            pos++;
        }
        k++;
    }
    return count;
}

string ReplaceEveryFourth(string& str) {
    int pos = 0;
    int k = 0;
    for (size_t i = 0; i < str.size(); i++) {
        if ((i + 1) % 4 == 0) {
            str[i] = '.';
            pos++;
        }
        k++;
    }
    return str;
}

int main() {
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);

    int dotCount = CountThirdDots(str);
    cout << "Number of dots: " << dotCount << endl;

    string modifiedStr = ReplaceEveryFourth(str);
    cout << "Modified string: " << modifiedStr << endl;

    return 0;
}
