#include <iostream>
using namespace std;
int main () {

    string numbers;
    int numLength = 13;
    long long int maxNum = 0;
    long long int temp;
    cin>>numbers;

    for (int i=0;i<=numbers.length()-numLength;i++) {
        temp = 1;
        int j=0;
        for (int j=0;j<numLength;j++) {
            temp*=(int)numbers[i+j]-48;
        }
        maxNum <temp ? maxNum = temp : maxNum;
    }

    cout<<maxNum;

    return 0;
}
