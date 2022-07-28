#include <iostream> // Include statement(s) //
#include <fstream>
using namespace std; // Using namespace statement(s) //
int main() {
    char storage; // Variable declaration(s) // 
    char letter1; 
    char letter2;
    ifstream input;
    input.open("prog2_input.txt"); // Opening file of txt from ifstream - input //
    input >> letter1 >> letter2; // input is reading each character as letter1 then letter2 //
    while (input >> storage) { // Placeholder for characters being read //
        cout << "P: " << storage << '\t'; // Outputs the storage for P being held //
        input >> storage; // Continues to read input //
        cout << "Q: " << storage << endl; // Outputs the storage for Q being held //
        if ('T' && 'F') {
            // P and Q //
            cout << "P and Q: " << 'F' << ' ';
            //input >> storage;
        }
        else if ('F' && 'T') {
            cout << "P and Q: " << 'F' << ' ';
        }
        else if ('F' && 'F') {
            cout << "P and Q: " << 'F' << ' ';
        }
        else 
            cout << "P and Q: " << 'T' << ' ';
        if ('T' || 'T') {
            // P or Q //
            cout << "P or Q: " << 'T' << ' ';
        }
        else if ('T' || 'F') {
            cout << "P or Q: " << 'T' << ' ';
        }
        else if ('F' || 'T') {
            cout << "P or Q: " << 'T' << ' ';
        }
        else
            cout << "P or Q: " << 'F' << ' ';
        if ((!letter1) || (letter1 && letter2)) {
            // If P then Q //
            cout << "P --> Q: " << storage << endl; 
        }
    }
    input.close(); // Close input file //
    system ("PAUSE"); // Black box to appear //
    return 0; // return statement(s) //
}
