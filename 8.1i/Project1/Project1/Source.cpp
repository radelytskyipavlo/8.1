#include <iostream>
#include <cstring>
using namespace std;

int CountThirdDots(char* str)
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '.' && str[i - 2] != '\0' && str[i - 1] != '\0') {
            if (str[i - 2] != '.' && str[i - 1] != '.') {
                count++;
            }
        }
    }
    return count;
}

void ReplaceEveryFourth(char* str) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if ((i + 1) % 4 == 0) {
            str[i] = '.';
        }
    }
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

