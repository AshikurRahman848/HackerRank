#include <iostream>
using namespace std;

int main() {

    int a[3], b[3], alice = 0, bob = 0;

    cin >> a[0] >> a[1] >> a[2];
    cin >> b[0] >> b[1] >> b[2];

    for (int i = 0; i < 3; i++) {

        if (a[i] > b[i]) {
            alice = alice + 1;
        }

        else if (a[i] < b[i]) {
            bob = bob + 1;
        }
    }
    cout << alice << " " << bob << endl;


    return 0;

}