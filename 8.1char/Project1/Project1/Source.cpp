#include <iostream>
#include <cstring>
using namespace std;

int CountThirdDots(const char* s) {
    int k = 0,
        pos = 0;
    const char* t;
    while (t = strchr(s + pos, '.')) {
        pos = t - s;
        if (pos >= 2 && s[pos - 1] != '.' && s[pos - 2] != '.') {
            k++;
        }
        pos++;
    }
    return k;
}

char* ReplaceEveryFourth(char* s) {
    int pos = 0;
    while (s[pos] != '\0') {
        if ((pos + 1) % 4 == 0) {
            s[pos] = '.';
        }
        pos++;
    }
    return s;
}

int main() {
    const int MAX_LENGTH = 100;
    char str[MAX_LENGTH];

    cout << "Enter string:" << endl;
    cin.getline(str, MAX_LENGTH);

    int dotCount = CountThirdDots(str);
    cout << "Number of dots: " << dotCount << endl;

    ReplaceEveryFourth(str);
    cout << "Modified string: " << str << endl;

    return 0;
}
