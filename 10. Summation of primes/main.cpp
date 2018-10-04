#include <iostream>
#include <math.h>
using namespace std;
int main () {

    //Eratoszthenész szitája algortimus

    int limit = 2000000;
    long long sumOfPrimes = 0;
    bool tomb [limit+1];
    tomb[0] = false;
    tomb[1] = false;

    for (int i=2;i<limit;i++) {
        tomb[i] = true;
    }

    for (int i=2;i*i<=limit;i++) {
        if (tomb[i]) {
            for (int j=i*i;j<limit;j+=i) tomb[j] = false;
        }
    }

    for (int i=0;i<=limit;i++) {
        if (tomb[i]) {
            sumOfPrimes+=i;
        }
    }

    cout<<sumOfPrimes;

    return 0;
}
