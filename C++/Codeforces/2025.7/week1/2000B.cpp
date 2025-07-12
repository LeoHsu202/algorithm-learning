/*
    题目大意：数组a记录依次上车乘客的座位号，如果该乘客坐的座位前一位或者后一位已经坐，那么是合法的，否则不合法。
    思路：从第二个乘客开始，判断当前乘客的座位号是否是前一个乘客座位号的前一位或者后一位，如果是则更新前后座位号，否则不合法。

*/

#include<iostream>
#include<vector>
using namespace std;
 
int main(){
    //输入
    int t;
    cin >> t;
    while(t--){
        int n;cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        //左右边界为第一个乘客的座位号
        int left = a[0], right = a[0];
        //判断合法性
        bool valid = true;
        //从第二个乘客开始判断
        for(int i = 1;i < n;i++){
            //+1==left，说明当前乘客坐在前一个乘客的座位号的前一位，那么更新左边界
            if(a[i] + 1 == left) left = a[i];
            //-1==right，说明当前乘客坐在前一个乘客的座位号的后一位，那么更新右边界
            else if(a[i] - 1 == right) right = a[i];
            //如果当前乘客的座位号不是前一个乘客座位号的前一位或者后一位，那么不合法
            else {
                valid = false;
                break;
            }
        }
        cout << (valid ? "YES" : "NO") << endl;
    }
    return 0;
}