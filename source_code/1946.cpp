#include <vector>
#include "iostream"
#include "algorithm"

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int T, t = 0;
    cin >> T;

    while(t < T) {
        vector<pair<int, int>> v;
        int itvees;
        cin >> itvees;
        for (int i = 0; i < itvees; ++i) {
            int f,s;
            cin >> f >> s;
            v.push_back({f,s});
        }

        sort(v.begin(), v.end());

        int cnt = 1;
        int min = v[0].second;
        for (int i = 1; i < itvees; ++i) {
            if(v[i].second < min) {
                cnt++;
                min = v[i].second;
            }
        }
        cout << cnt << '\n';
        t++;
    }
    return 0;
}

