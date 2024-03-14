#include <iostream>
using namespace std;

const int MAX_N = 10;
int cat[MAX_N + 5];  // 每只猫操作时的鱼数

int main() {
    int N, i;
    cin >> N >> i;

    int fen = 1;  // 因为找最少，所以一开始从每份一条鱼开始往上面试

    // 要保证cat[cnt]中的鱼除了最后一次，每一次都是n - 1的倍数

    // 从最后一个猫倒着推找答案
    int cnt = N;
    cat[cnt] = fen * N + i;  // 初始最后一只猫的鱼数

    while (cnt >= 1) {

        if (cnt == 1) {
            cout << cat[1] << endl;
            break;
        }

        if (cat[cnt] % (N - 1) != 0) {
            fen++;
            cnt = N;  // 重置循环
            cat[cnt] = fen * N + i;  // 初始最后一只猫的鱼数
            continue;
        }
        cat[cnt - 1] = cat[cnt] / (N - 1) * N + i;
        cnt--;  // 换上一只猫
    }

    // for (int cnt = 1; cnt <= N; cnt++) {
    //     printf("cat[%d] = %d\n", cnt, cat[cnt]);
    // }

    return 0;
}