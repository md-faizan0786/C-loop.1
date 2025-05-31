#include<iostream>
#include<cmath>
using namespace std;

//Prime OR Not

int main() {
    int n;

    cout <<"enter number :";
    cin>> n;

    bool isPrime = true;

    for(int i=2; i<=sqrt(n); i++) {
        if(n % i == 0) {  // i is a factor of n; i completely divides n; n is non-prime
            isPrime = false;
            break;
        }
    }

    if(isPrime == true) {
        cout <<"number is Prime." << endl;
    } else {
        cout << "number is NOT Prime." << endl;
    }

    return 0;
}