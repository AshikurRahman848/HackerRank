#include <iostream>
using namespace std;

long long rev(long long n) {
    long long tmp = 0;
    while (n != 0) {
        tmp *= 10;
        tmp += n % 10;
        n /= 10;
    }
    return tmp;
}
int main() {
    long long a, b, k, cnt = 0;
    cin >> a >> b >> k;
    for (long long i = a; i <= b; i++)if (abs(i - rev(i)) % k == 0)cnt++;
    cout << cnt << endl;
    return 0;
}
