#include<iostream>
using namespace std;

int main() {

    int n;
    cout<<"Enter the number :";
    cin >> n;

    int ans = 0;
    int i = 1;  // Start with place value as 1 for binary calculation
   
    while (n != 0) {
        int bit = n & 1; // Get the last bit of the number

        ans = (bit * i) + ans; // Add the bit at the correct place value

        n = n >> 1;  // Shift right by 1 bit
        i = i* 10;     // Move to the next place value in binary
    }

    cout << "Answer is " << ans << endl;

    return 0;
}
