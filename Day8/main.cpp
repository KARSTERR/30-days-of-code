#include <iostream>
#include <map>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    map<string, string> phonebook{};
    
    cin >> T;
    cin.ignore();  // Ignore the newline character after the integer input
    
    // Insert key-value pairs into the phonebook
    for (int i = 0; i < T; i++){
        string input;
        getline(cin, input);
        
        stringstream ss(input);
        string key, value;
        
        ss >> key >> value;
        
        // Check if key is lowercase and if value is 8 digits long
        if (key.empty() || value.empty() || value.length() != 8 || !all_of(value.begin(), value.end(), ::isdigit) || !all_of(key.begin(), key.end(), ::islower)) {
            // Skip invalid entries and continue to the next line
            continue;
        } else {
            phonebook[key] = value;  // Insert valid key-value pair into the phonebook
        }
    }
    
    // Process the queries
    string query;
    while (getline(cin, query)) {
        if (phonebook.count(query) > 0) {
            cout << query << "=" << phonebook[query] << endl;
        } else {
            cout << "Not found" << endl;
        }
    }
}
