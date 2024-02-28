#include <cstring>
#include <iostream>
using namespace std;

bool isPasswordValid(const char password[]) {
    // 检查密码长度
    size_t len = strlen(password);
    if (len < 6 || len > 12) {
        return false;
    }

    // 检查密码组成
    int hasUpperCase = 0, hasLowerCase = 0, hasDigit = 0, hasSpecialChar = 0;

    for (size_t i = 0; i < len; ++i) {
        char ch = password[i];
        if (isupper(ch)) {
            hasUpperCase = 1;
        } else if (islower(ch)) {
            hasLowerCase = 1;
        } else if (isdigit(ch)) {
            hasDigit = 1;
        } else if (ch == '!' || ch == '@' || ch == '#' || ch == '$') {
            hasSpecialChar = 1;
        } else {
            return false;  // 如果密码包含其他字符，则不合规
        }
    }

    // 检查密码组成要求
    // return (hasUpperCase && hasLowerCase && hasDigit && hasSpecialChar);
    if (!hasSpecialChar)
        return false;
    if (hasUpperCase + hasLowerCase + hasDigit < 2)
        return false;
    return true;
}

int main() {
    // 读取输入字符串
    char input[105];
    // cout << "请输入多组密码，用英文逗号分隔: ";
    cin.getline(input, sizeof(input));

    // 将输入字符串分割成多个密码
    char password[105];
    int i = 0;
    for (int j = 0; input[j] != '\0'; ++j) {
        if (input[j] != ',') {
            password[i++] = input[j];
        } else {
            password[i] = '\0';  // 添加字符串结束符
            // 检查每个密码并输出符合规定的密码
            if (isPasswordValid(password)) {
                cout << password << endl;
            }
            i = 0;  // 重置密码数组索引
        }
    }

    // 处理最后一个密码
    password[i] = '\0';
    if (isPasswordValid(password)) {
        cout << password << endl;
    }

    return 0;
}