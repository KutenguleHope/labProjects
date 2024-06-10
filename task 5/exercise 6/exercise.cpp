#include <fstream>
#include <string>
#include <iostream>

using namespace std;

// Function to count the number of vowels in a string
void countVowels(const string& str) {
    int count = 0;
    for (char c : str) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            count++;
            cout << "Number of vowels: " << count << endl;
        }
    }
    
}

// Function to count the number of words in a string
void countWords(const string& str) {
    int count = 0;
    bool inWord = false;
    for (char c : str) {
        if (c == ' ' || c == '\t' || c == '\n') {
            inWord = false;
        } else if (!inWord) {
            inWord = true;
            count++;
            cout << "Number of words: " << count << endl;
        }
    }
    
}

// Function to reverse a string
void reverse(const string& str) {
    string reversed;
    for (int i = str.length() - 1; i >= 0; i--) {
        reversed += str[i];
        cout << " reversed statement:  "<< reversed << endl;
    }

}

// Function to capitalize the second letter of each word
void capitalizeSecondLetter(const string& str) {
    string capitalized;
    bool inWord = false;
    int wordIndex = 0;
    for (char c : str) {
        if (c == ' ' || c == '\t' || c == '\n') {
            inWord = false;
            wordIndex = 0;
        } else if (!inWord) {
            inWord = true;
            capitalized += c;
            wordIndex++;
        } else if (wordIndex == 1) {
            capitalized += toupper(c);
            wordIndex++;
        } else {
            capitalized += c;
            cout << "Capitalized statement: " << capitalized << endl;

        }
    }
    
}

int main() {
    // Open the text file and read its contents into a string variable
    ifstream file("preparedTextFile.txt");
    if (!file) {
        cerr << "Error opening file." << endl;
        return 1;
    }
    string line;
    while(getline(file, line))
    {
        cout << line << endl;
    }
    file.close();
    string fileData((istreambuf_iterator<char>(file)), istreambuf_iterator<char>());

    // Count the number of vowels in the text file statement
     countVowels(fileData);
    

    // Count the number of words in the text file statement
     countWords(fileData);
    

    // Reverse the text file statement
     reverse(fileData);


    // Capitalize the second letter of each word
     capitalizeSecondLetter(fileData);
    
    return 0;
}

