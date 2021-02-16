#include "iostream"
#include "algorithm"
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int* a = new int[10];

	int j = 10;
    for (int i = 0; i < 10; ++i) {
        a[i] = j--;
    }

    sort(a, a+10);

    for (int i = 0; i < 10; ++i) {
        cout << a[i] << endl;
    }


	return 0;
}