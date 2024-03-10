#include <iostream>
int main() {
    long long n, i, j, k, ans; // 声明变量 n（小猫数量）、i（每次扔到海里的鱼的数量）、j、k、ans
    bool flag; // 声明布尔变量 flag，用于标记是否找到满足条件的答案

    scanf("%lld%lld", &n, &i); // 从标准输入中读取小猫数量和每次扔到海里的鱼的数量

    k = 1; // 初始化计数器 k 为 1
    while (true) { // 进入循环，直到找到满足条件的答案为止
        flag = true; // 初始化 flag 为 true
        ans = k * n + i; // 计算当前情况下每只小猫应该得到的鱼数

        for (j = 1; j < n; j++) { // 遍历每只小猫
            if (ans % (n - 1) != 0) { // 检查是否满足每只小猫都能吃到鱼的条件
                flag = false; // 如果不满足条件，将 flag 置为 false
                break; // 跳出循环
            }
            ans = ans / (n - 1) * n + i; // 更新每只小猫应该得到的鱼数
        }

        if (flag) // 如果 flag 为 true，表示找到满足条件的答案
            break; // 结束循环

        k++; // 如果不满足条件，增加计数器 k，继续尝试
    }

    printf("%lld\n", ans); // 输出满足条件的答案
    return 0;
}

