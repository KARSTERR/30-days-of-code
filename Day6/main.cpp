#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int T;
    cin >> T;
    cin.ignore();
    
    while (T--){
        string s;
        getline(cin, s);
        
        string even_string = "";
        string odd_string = "";
        
        for (int i = 0; i < s.length(); i++){
            if (i % 2 != 0){
                even_string += s[i]; 
            }
            else {
                odd_string += s[i]; 
            }
        }
        
        cout << odd_string << " " << even_string << endl;
    }
}
