/*
题意：
给定两个整数 n 和 k，判断是否存在非负整数 x 和 y，使得 2x + ky = n。

思路分析：
1. 2x 始终为偶数，因此 n 的奇偶性由 ky 决定。
2. 分情况讨论：
   - 当 k 为偶数时：
     ky 必为偶数，因此 n 必须是偶数。
     只要 n ≥ k 且 n 是偶数，必然存在解（因为 2x 可以调整为任意偶数）。
   - 当 k 为奇数时：
     ky 的奇偶性由 y 决定：
     - 若 n 为偶数：y 必须为偶数（ky 为偶数），此时需满足 n ≥ 2k。
     - 若 n 为奇数：y 必须为奇数（ky 为奇数），此时需满足 n ≥ k。
*/


#include <iostream>
using namespace std;

int main(){
    long long t;
    cin >> t;
    while(t--){
        long long n, k;
        cin >> n >> k;
        if(k % 2 == 0) {
            cout << (n % 2 == 0 ? "YES" : "NO") << endl;
        } else {
            if(n % 2 == 0){
                cout << "YES" << endl;
            } else {
                cout << (k <= n ? "YES" : "NO") << endl;
        }
    }
    }
    return 0;
}