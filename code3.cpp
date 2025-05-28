#include <iostream>
using namespace std;

int main() {
    int count =1;
    int i =1;

    int n =12345;
    int digSum = 0;

    while(count <= 10) {
        cout << count << endl;
        count ++;
    }

     while(i <= 5) {
        cout << "Apna college" << endl;
        i ++;
    }

    while(n > 0) {
        int lastDig = n % 10;
        digSum += lastDig;
        n = n / 10;
    }
    cout << "Sum of Digits= " << digSum << endl;



    return 0;
}

