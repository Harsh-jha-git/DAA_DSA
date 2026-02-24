#include <iostream>
using namespace std;

int main(){
    int num1;
    int num2;
    cin >> num1 >> num2;
    int prod = 0;

    while(num2 > 0){
        if(num2 & 1){        // If last bit is 1
            prod += num1;    // Add current num1
        }
        num1 <<= 1;          // Multiply num1 by 2
        num2 >>= 1;          // Divide num2 by 2
    }

    cout << prod << endl;
}