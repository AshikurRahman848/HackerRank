#include <iostream>
using namespace std;

void miniMaxSum(long arr[], int x) {

    int i;
    long minimum = arr[0];

    long sum = 0, min_sum = 0, max_sum = 0;

    for (i = 0; i < x; i++) {
        if (arr[i] < minimum) {
            minimum = arr[i];
        }
    }

    int maximum = arr[0];

    for (i = 0; i < x; i++) {
        if (arr[i] > maximum) {
            maximum = arr[i];
        }
    }


    for (i = 0; i < x; i++) {
        sum = sum + arr[i];
    }

    min_sum = sum - maximum;
    max_sum = sum - minimum;


    cout << min_sum << " " << max_sum;

}

int main() {
    int x = 5;

    long arr[x];

    for (int i = 0; i < x; i = i + 1) {

        cin >> arr[i];
    }

    miniMaxSum(arr, x);

    return 0;
}
