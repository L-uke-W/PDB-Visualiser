/*
    Parse the pdb file and show the contents 
*/

#include <iostream>
#include <fstream>
using namespace std;

// Class should conatin all the info of the protein file parsed
class Protein {
    double coordinates;
    char atom_type;
    int atom_num;
    public:

    // Protein constructor
    Protein () {
        coordinates = 0.0;
        atom_type = 'R';
        atom_num = 0;
    }

    Protein (double c, char at, int an) {
        coordinates = c;
        atom_type = at;
        atom_num = an;
    }

    // Protein destructor
    ~Protein() {
        cout << "Protein data destructed";
    }

    // Get protein 
    double get_coords() {
        return coordinates;
    }

    char get_atom_type() {
        return atom_type;
    }

    int get_atom_num() {
        return atom_num;
    }

};


int main(int argv, char *argc) {
    
    if (argv < 2) {
        cout << "Usage: [EXE]open_and_read.exe [FILEPATH] file path of protein";
        return 1;
    }
    
    char dir = argc[2];
   
    ifstream in(dir, ios::binary);
    
    //Check if the file exists
    if (!in) {
        cout << "File not found";

        return 1;
    }
    
    // Read file
    for (int i = 0; i < in.eof(); i++) {
        in[i]
    }

    //ofstream file()

    
}