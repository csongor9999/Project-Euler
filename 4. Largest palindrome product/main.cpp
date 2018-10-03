#include <iostream>
#include <string>
using namespace std;
int main () {

    int maxn = 0;

    for (int i=1;i<1000;i++) {
        for (int j=i;j<1000;j++) {
            string temp = to_string(i*j);
            string reverseNum = "";
            for (int k=temp.length()-1;k>=0;k--) {
                    reverseNum += temp[k];
            }
            if (temp == reverseNum && i*j>maxn) {
                maxn = i*j;
            }
       }
    }

    cout<<maxn;

    return 0;
}
