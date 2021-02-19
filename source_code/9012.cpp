#include <iostream>
#include <algorithm>
#include "stdio.h"


using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int num;
    cin >> num;
    string* str = new string[num];
    for (int i = 0; i < num; ++i) {
        cin >> str[i];
    }
    for (int i = 0; i < num; ++i) {
        int open = 0, close = 0;
        bool isTrue = true;
        if(str[i][0] != '(' || str[i][str[i].length()-1] != ')') {
            cout << "NO" << endl;
            continue;
        }

        for (int j = 0; j < str[i].length(); ++j) {
            if(str[i][j] == '(') {
                ++open;
            }
            else {
                ++close;
            }
            if(open < close) {
                isTrue = false;
                break;
            }
            if(j==str[i].length()-1 && open != close) {
                isTrue = false;
            }
        }
        if(isTrue) {
            cout << "YES" << endl;
        }else {
            cout << "NO" << endl;
        }
    }
}