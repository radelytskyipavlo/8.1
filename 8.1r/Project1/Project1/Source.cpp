#include <iostream>
#include <cstring>
using namespace std;

int CountThirdDots(char* str, int i, int dotCount) {
    if (str[i] == '\0' || str[i + 1] == '\0' || str[i + 2] == '\0') {
        return dotCount;
    }

    if (str[i] == '.' && str[i + 1] != '.' && str[i + 2] != '.') {
        dotCount++;
    }

    return CountThirdDots(str, i + 1, dotCount);
}

void ReplaceEveryFourth(char* str, int i) {
    if (str[i] == '\0') {
        return;
    }

    if ((i + 1) % 4 == 0) {
        str[i] = '.';
    }

    ReplaceEveryFourth(str, i + 1);
}

int main() {
    const int MAX_LENGTH = 100;
    char str[MAX_LENGTH];

    cout << "Enter string:" << endl;
    cin.getline(str, MAX_LENGTH);

    int dotCount = CountThirdDots(str, 0, 0);

    if (str[strlen(str) - 1] == '.')
        dotCount++;

    cout << "Number of dots: " << dotCount << endl;

    ReplaceEveryFourth(str, 0);
    cout << "Modified string: " << str << endl;

    return 0;
}
