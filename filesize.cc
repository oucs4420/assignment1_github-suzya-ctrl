#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[])
{
    ifstream filename;
     string line;
        cout << "program: " << argv[0] << endl;
    // just to get you started, this is how to refer to the arguments that were passed
    for (int arg = 1; arg < argc; arg++){
                int counter = 0;
        filename.open(argv[arg]);
        
        if(filename.fail()){
            cout << " " <<  argv[arg] << ": -1" << endl; 
        } else{
        
        while(getline(filename, line)){
            counter++;
    }
        cout << " " << argv[arg] << ": " << counter << endl;
        filename.close();
    }
    }
    exit(0); // this means that the program executed correctly!
}

