#include <iostream>
using namespace std;
int main () {

    int j=2;
    int i=11;
    while (j<=20) {
        i%j==0 ? j++ : (j=2,i++);
    }

    cout<<i;

    return 0;
}
