#include <bits/stdc++.h>

using namespace std;

// Complete the extraLongFactorials function below.
int multiply(int number, int resultArray[], int resultArraySize) {

    // * Initializing variables
    int carry = 0, mulRes;

    for(int i=0; i<resultArraySize; i++) {
        mulRes = number * resultArray[i] + carry;
        resultArray[i] = mulRes%10;
        carry = mulRes / 10;
    }


    while(carry) {
        resultArray[resultArraySize++] = carry%10;
        carry = carry / 10;
    }

    return resultArraySize;
}

void extraLongFactorials(int n) {

    int resultArray[200], resultArraySize = 1;
    resultArray[0] = 1;


    while(n) {
        resultArraySize = multiply(n--, resultArray, resultArraySize);
    }

    for(int i=resultArraySize-1; i>=0; i--) {
        cout<<resultArray[i];
    }
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    extraLongFactorials(n);

    return 0;
}



