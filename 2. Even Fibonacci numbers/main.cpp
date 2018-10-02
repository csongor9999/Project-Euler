#include <iostream>
using namespace std;
int main () {

    int a=1,b=1;
    int sum = 0;

    while (b<4000000) {
        b+=a;
        a=b-a;
        a%2==0 ? sum+=a : a;
    }

    cout<<sum;

    return 0;
}
