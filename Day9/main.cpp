#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int factorial(int a){
    if (a > 0) {
        return a * factorial(a -1 );
    } else {
        return 1;
    }
}


int main() {
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int x;
    cin >> x;
    cout << factorial(x) << endl;
}
