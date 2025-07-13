/*
题意：两个整数2，k。是否存在非负整数x和y，使得2x+ky=n。
思路：如果k是奇数，那么x可以为0，y可以为n/k，满足条件；如果k是偶数，那么n也必须是偶数，且n/k必须是偶数才能满足条件。

偶数x任何数都是偶数 奇数x奇数=奇数

2x + ky = n 
偶数 + ky = n
如果k是偶数，那么ky也是偶数，n也必须是偶数才能满足条件。
如果k是奇数，奇偶性由y决定，如果y是偶数，那么ky是偶数，如果y是奇数，那么ky是奇数。
n为偶数，ky是偶数，y是偶数。
n为奇数，ky是奇数，y是奇数。
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