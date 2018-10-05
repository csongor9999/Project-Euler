#include <iostream>
using namespace std;
int main () {

    string numbers; //Without space in one line
    cin>>numbers;
    int matrix[20][20];
    int maxNum = 0;
    int temp;
    int counter = 0;

    for (int i=0;i<20;i++) {
        for (int j=0;j<20;j++) {
            matrix[i][j] = 10*((int)numbers[counter++]-48)+(int)numbers[counter++]-48;
        }
    }

    for (int i=0;i<20;i++) {
        for (int j=0;j<20;j++) {
            for (int k=0;k<8;k++) {
                switch(k) { //directions

                case 0:
                    j+4<20 ? temp = matrix[i][j]*matrix[i][j+1]*matrix[i][j+2]*matrix[i][j+3] : k;
                    break;
                case 1:
                    j-4>0 ? temp = matrix[i][j]*matrix[i][j-1]*matrix[i][j-2]*matrix[i][j-3] : k;
                    break;
                case 2:
                    i-4>0 ? temp = matrix[i][j]*matrix[i-1][j]*matrix[i-2][j]*matrix[i-3][j] : k;
                    break;
                case 3:
                    i+4<20 ? temp = matrix[i][j]*matrix[i+1][j]*matrix[i+2][j]*matrix[i+3][j] : k;
                    break;
                case 4:
                    i-4>0 && j-4>0 ? temp = matrix[i][j]*matrix[i-1][j-1]*matrix[i-2][j-2]*matrix[i-3][j-3] : k;
                    break;
                case 5:
                    i+4<20 && j+4<20 ? temp = matrix[i][j]*matrix[i+1][j+1]*matrix[i+2][j+2]*matrix[i+3][j+3] : k;
                    break;
                case 6:
                    i+4<20 && j-4>0 ? temp = matrix[i][j]*matrix[i+1][j-1]*matrix[i+2][j-2]*matrix[i+3][j-3] : k;
                    break;
                case 7:
                    i-4>0 && j+4<20 ? temp = matrix[i][j]*matrix[i-1][j+1]*matrix[i-2][j+2]*matrix[i-3][j+3] : k;
                    break;
                }
                temp>maxNum ? maxNum = temp : temp;
            }
        }
    }

    cout<<maxNum;



    return 0;
}
