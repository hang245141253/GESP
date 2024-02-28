#include <iostream>
using namespace std;

// 判断是否是二进制
bool isBinary(const char* str) {
    while (*str != '\0') {
        if (*str != '0' && *str != '1') {
            return false;
        }
        ++str;
    }
    return true;
}

// 判断是否是八进制
bool isOctal(const char* str) {
    while (*str != '\0') {
        if (!isdigit(*str) || *str >= '8') {
            return false;
        }
        ++str;
    }
    return true;
}

// 判断是否是十进制
bool isDecimal(const char* str) {
    while (*str != '\0') {
        if (!isdigit(*str)) {
            return false;
        }
        ++str;
    }
    return true;
}

// 判断是否是十六进制
bool isHexadecimal(const char* str) {
    while (*str != '\0') {
        if (!isxdigit(*str)) {
            return false;
        }
        ++str;
    }
    return true;
}

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; ++i) {
        char num[11];
        cin >> num;

        // 输出四个进制判断的结果
        cout << isBinary(num) << " " << isOctal(num) << " " << isDecimal(num) << " " << isHexadecimal(num) << endl;
    }

    return 0;
}
