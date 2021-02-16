#include "iostream"
#include "algorithm"

using namespace std;

bool compare(int a, int b) {
    return a > b;
}
int main() {
    int howManyRopes, i = 0;
    cin >> howManyRopes;
    int* ropes = new int[howManyRopes];
    while(i < howManyRopes) {
        cin >> ropes[i];
        i++;
    }

    sort(ropes, ropes+howManyRopes, compare);

    int max = ropes[0];
    for(int i = 1; i < howManyRopes; i++) {
        if(ropes[i]*(i+1) > max) {
            max = ropes[i] * (i+1);
        }
    }
    cout << max;
    return 0;

}