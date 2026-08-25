#include <iostream>
using namespace std;

int maximumWealth(int accounts[][3], int rows) {

    int maxWealth = 0;

    for(int i = 0; i < rows; i++) {

        int sum = 0;

        for(int j = 0; j < 3; j++) {
            sum = sum + accounts[i][j];
        }

        if(sum > maxWealth) {
            maxWealth = sum;
        }
    }

    return maxWealth;
}

int main() {

    int accounts[2][3] = {
        {1, 2, 3},
        {3, 2, 1}
    };

    int rows = 2;

    cout << "Maximum Wealth = "
         << maximumWealth(accounts, rows);

    return 0;
}