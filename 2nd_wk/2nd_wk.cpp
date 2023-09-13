

#include <iostream>
#include <string>

using namespace std;

// Function to output numbers divisible by two different numbers
void printNumbersDivisibleBy(int num1, int num2) {
    for (int i = 1; i <= 1000; i++) {
        if (i % num1 == 0 && i % num2 == 0) {
            cout << i << endl << " ";
        }
    }
    cout << endl;
}

// Function to reverse the letters in a string
string reverseString(const string& input) {
    string reversed;
    for (int i = input.length() - 1; i >= 0; i--) {
        reversed += input[i];
    }
    return reversed;
}

// Function to remove vowels from a string
string removeVowels(const string& input) {
    string result;
    for (char v : input) {
        if (tolower(v) != 'a' && tolower(v) != 'e' && tolower(v) != 'i' && tolower(v) != 'o' && tolower(v) != 'u') {
            result += v;
        }
    }
    return result;
}

int main() {
    
    int num1, num2;
    cout << "Enter two different numbers." << endl;
    cout << "First Number: ";
    cin >> num1;
    cout << "Second Number: ";
    cin >> num2;
    cout << endl << "Numbers divisible by " << num1 << " and " << num2 << " between 0 and 1000: " << endl << " ";
    printNumbersDivisibleBy(num1, num2);

    cout << "----------------------------------------------------" << endl;
    
    string input;
    cout << endl <<"Enter a word or sentence to be reversed: ";
    cin.ignore();
    getline(cin, input);
    string reversed = reverseString(input);
    cout << "Reversed word or sentence: " << reversed << endl;

    cout << "----------------------------------------------------" << endl;
    
    cout << endl << "Enter a word or sentence with vowels: ";
    getline(cin, input);
    string withoutVowels = removeVowels(input);
    cout << "The word or sentace with vowels removed: " << withoutVowels << endl;

    cout << "----------------------------------------------------" << endl;

    return 0;
}



