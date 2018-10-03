#include <iostream>
#include <math.h>
using namespace std;
int main () {


    long long int largestPrimeNumber = 600851475143;
    int isPrime = false;
    long long int sum = 1;
    int i=3;

    while (i<int(sqrt(largestPrimeNumber))+1 && sum!=largestPrimeNumber) {
        int j=2;
        isPrime = true;
        while (j<int(sqrt(i))+1 && isPrime==true) {
            if (i%j==0) {
                isPrime = false;
            }
            j++;
        }
        if (isPrime == true && largestPrimeNumber%i==0) {
        cout<<i<<endl;
        sum*=i;
        }
        i++;
    }
    return 0;
}
