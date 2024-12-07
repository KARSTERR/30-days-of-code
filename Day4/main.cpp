#include <iostream>
using namespace std;

class Person {
private:
    int age;

public:
    // Constructor
    Person(int initialAge) {
        if (initialAge < 0) {
            cout << "Age is not valid, setting age to 0." << endl;
            age = 0;
        } else {
            age = initialAge;
        }
    }

    // Method to increase age by 1 year
    void yearPasses() {
        age++;
    }

    // Method to print the age category
    void amIOld() {
        if (age < 13) {
            cout << "You are young." << endl;
        } else if (age >= 13 && age < 18) {
            cout << "You are a teenager." << endl;
        } else {
            cout << "You are old." << endl;
        }
    }
};

int main() {
    int t;
    cin >> t;  // Read the number of test cases
    bool firstTestCase = true;

    while (t--) {
        int age;
        cin >> age;  // Read the age for each test case

        Person p(age);  // Create a Person object

        p.amIOld();  // Print the current age category

        // Simulate passing of 3 years
        for (int i = 0; i < 3; i++) {
            p.yearPasses();  // Increase the person's age by 1
        }

        p.amIOld();  // Print the new age category after 3 years

        // Print an extra newline after each test case except the last one
        if (t > 0) {
            cout << endl;
        }
    }

    return 0;
}
