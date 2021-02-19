#include <iostream>
#include <algorithm>
#include <list>
#include <queue>
#include <vector>
using namespace std;

vector<pair<int, int>> v;

bool compare(pair<int, int> a, pair<int, int> b) {
    if(a.first == b.first) {
        return a.second < b.second;
    }
    return a.first < b.first;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int num;
    for (int i = 0; i < num; ++i) {
        int s, e;
        cin >> s >> e;
        v.push_back(make_pair(s,e));
    }

}