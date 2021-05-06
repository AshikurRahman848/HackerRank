#include <iostream>
using namespace std;

int main() {

    int x, y, z;
    cin >> x >> y;

    int arr[x];

    for (int i = 0; i < x; ++i) {
        cin >> arr[i];
    }

    int sum = 0;
    int i, q, bill;

    q = arr[y];

    for (i = 0;i < x;i++) {
        sum = sum + arr[i];
    }

    cin >> z;

    bill = (sum - q) / 2;

    if (bill == z) {

        cout << "Bon Appetit";
    }
    else {

        cout << z - bill;
    }

    return 0;
}
