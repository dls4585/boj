#include <iostream>
#include "algorithm"
#include "vector"

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b){
    if(a.second == b.second) return a.first < b.first;
    return a.second < b.second;
}

int main() {
    int rooms, i = 0;
    cin >> rooms;
    vector<pair<int, int>> v;
    while (i < rooms) {
        int s,e;
        cin >> s >> e;
        v.emplace_back(s,e);
        i++;
    }
    sort(v.begin(), v.end(), compare);

    int now = v[0].second;
    int cnt = 1;

    for(int i = 1; i < rooms && now < v[rooms-1].second; i++) {
        if(v[i].first < now) continue;
        else {
            now = v[i].second;
            cnt++;
        }
    }

    cout << cnt;


    return 0;
}


