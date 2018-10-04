#include <iostream>
using namespace std;
int main () {

    int check = 1000;

    for (int i=1;i<check/2;i++) {
        for (int j=i;j<check/2;j++) {
            for (int k=j;k<check/2;k++) {
                if (i*i+j*j == k*k && i+j+k==check) {
                    cout<<i*j*k<<endl;
                }
            }
        }
    }

    return 0;
}
