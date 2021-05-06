#include <iostream>
using namespace std;

int main()
{
    int x;

    cin >> x;
    int scores[x];

    for (int i = 0; i < x; i++) {
        cin >> scores[i];
    }

    int max = scores[0], min = scores[0], best_most_point = 0, breaking_least_point = 0, result[2];
    int i;

    for (i = 0; i < x; i++) {
        if (scores[i] > max) {
            max = scores[i];
            best_most_point++;

        }
        else if (scores[i] < min) {
            min = scores[i];
            breaking_least_point++;
        }
    }

    for (i = 0; i < 2; i++) {
        result[0] = best_most_point;
        result[1] = breaking_least_point;
    }


    for (int i = 0; i < 2; i++) {
        cout << result[i] << " ";

    }

    return 0;
}