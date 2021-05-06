#include <iostream>
using namespace std;

int main() {
    int maximum = 0;
    int x, y;
    cin >> x;

    int a[100] = { 0 };

    for (int i = 0;i < x;i++) {
        cin >> y;
        a[y]++;
    }
    for (int i = 0;i < x - 1;i++) {
        if (a[i] + a[i + 1] > maximum) maximum = a[i] + a[i + 1];
    }
    cout << maximum;
    return 0;
}
