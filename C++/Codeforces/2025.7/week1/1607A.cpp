/*
题目大意：输入两行 一行键盘的排列的字符串 一行需要输入的字符串 需要输出所有两两字符在键盘上对应位置的绝对差值的和
*/


#include<iostream>
#include<vector>
#include<string>
#include<cstdlib>//整数abs
using namespace std;

int main(){
    int t;cin >> t;
    vector<int> a;
    while(t--){
        string n;cin >> n;
        string m;cin >> m;
        //
        for(char c : m){
            for(int i = 0;i < n.size();i++){
                if(c == n[i]){
                    a.push_back(i);
                    break;//找到对应位置就break
                }
            }
        }
        int sum = 0;//每个样例需要重置sum
        //为了防止越界访问，1-based， i - i-1；
        for(int i = 1;i < a.size();i++){
            sum += abs(a[i] - a[i-1]);
        }
        cout << sum << endl;
        a.clear();//每个案例结束需要清除数组内容
    }
    return 0;
}