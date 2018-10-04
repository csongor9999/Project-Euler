#include <iostream>
#include <math.h>
using namespace std;
int main () {

    int primeCount = 0;
    int i = 2;
    bool isPrime = true;

    while (primeCount<10001) {
        for (int j=2;j<=sqrt(i);j++) {
            i%j==0 ? isPrime = false : isPrime;
        }
        isPrime ? primeCount++ : isPrime=true;
        i++;
    }
    cout<<i-1;

    return 0;
}
