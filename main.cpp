#include <iostream>
#include <fstream> // for file handling


using namespace std;


int main() {
    ofstream File("hellow.txt"); // Create and open the file


    File << "Hello, Jhon!" << endl;
    File << "How are you....." << endl;

    File.close(); // Close the file






    ifstream inputFile("hellow.txt"); // Open the file for reading


    string line;
    while (getline(inputFile, line)) {
        cout << line <<
        endl; // Print each line from the file
    }

    inputFile.close(); // Close the file


    return 0;
}
