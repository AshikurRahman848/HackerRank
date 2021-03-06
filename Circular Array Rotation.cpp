#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
// rotating the array.
int main() {
    // Read input
    int n, k, q;
    cin>>n>>k>>q;
    int *array = new int[n];
    for(int i = 0; i < n; i++) {
        cin>>array[i];
    }
    k %= n; // Remove the number of full array rotations from k
    for(int i = 0; i < q; i++) {
        int b;
        cin>>b;
        cout<<array[(n-k+b)%n]<<"\n"; // Calculate the new index for b
    }
    return 0;
}
