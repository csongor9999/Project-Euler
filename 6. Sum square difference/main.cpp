#include <iostream>
using namespace std;
int main () {

    int numSquareSum = 0;
    int numSumSquare = 0;
    int range = 100;

    for (int i=1;i<=range;i++) {
        numSquareSum += i*i;
        numSumSquare += i;
    }

    cout<<numSumSquare*numSumSquare-numSquareSum;

    return 0;
}
