#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main() {
    int x;
    double y;
    string z;

    int i(4);
    double d(4.0);
    string s("HackerRank ");

    cin >> x;
    cin >> y;
    cin.ignore();
    getline(cin, z);

    cout << i + x << endl;
    cout << fixed << setprecision(1) << d + y << endl;  // Set precision to 1 decimal place
    cout << s << z << endl;
}
