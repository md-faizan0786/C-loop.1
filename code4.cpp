#include <iostream>
using namespace std;

// Sum of N natural number
int main() {
    int n;
    int sum = 0;
    
    cout<< "enter your n : ";
    cin >> n;

    for(int i=1; i<=n; i++) {
        sum = sum + i;
    }
     cout << "Sum = "<< sum << endl;
   
     return 0;
}



