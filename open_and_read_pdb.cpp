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

    char dir = argc[2];

    //Check if the file exists
    if () {
        Protein prtn;

        ifstream
    }
         

    //ofstream file()

    
}