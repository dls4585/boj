#include "iostream"
#include "algorithm"

using namespace std;
int main() {

    int people;
    cin >> people;
    int* p = new int[people];
    int i = 0;
    do {
        cin >> p[i];
        i++;
    } while(getc(stdin) == ' ');

    sort(p, p+people);

    int cnt = p[0];
    int before = p[0];
    for(i = 1; i < people; i++) {
        before += p[i];
        cnt += before;
    }
    cout << cnt;

    return 0;
}