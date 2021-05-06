#include <iostream>
#include <vector>


using namespace std;

int migratoryBirds(int n, vector <int> ar) {

    int count = 0;
    int max = 0;
    vector<long>counter(6);
    counter[0] = 0;
    int count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0;
    for (size_t i = 0; i < ar.size(); i++)
    {
        if (ar[i] == 1)
        {
            count1++;
            counter[1] = count1;

        }
        if (ar[i] == 2)
        {
            count2++;
            counter[2] = count2;

        }
        if (ar[i] == 3)
        {

            count3++;
            counter[3] = count3;
        }

        if (ar[i] == 4)
        {
            count4++;
            counter[4] = count4;

        }
        if (ar[i] == 5)
        {
            count5++;
            counter[5] = count5;
        }

    }

    for (size_t i = 1; i <= 5; i++)
    {

        max = (counter[max] < counter[i]) ? i : max;

    }
    return max;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for (int ar_i = 0; ar_i < n; ar_i++) {
        cin >> ar[ar_i];
    }
    int result = migratoryBirds(n, ar);
    cout << result << endl;
    system("pause");
    return 0;
}
