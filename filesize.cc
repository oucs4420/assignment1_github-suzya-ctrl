#include <iostream>
#include <fstream>
using namespace std;

// output format to use IDENTICALLY:
//BSH:Saru> ./filesize input.3lines input.1line
//program: ./filesize
// input.3lines: 3
// input.1line: 1

int main(int argc, char *argv[])
{
    ifstream filename;
    string line;
        int counter = 0;
        cout << "program: " << argv[0] << endl;
    // just to get you started, this is how to refer to the arguments that were passed
    for (int arg = 1; arg < argc; arg+=1){
          //std::cout << "argv[" << arg << "]: " << argv[arg] << '\n' ;
        filename.open(argv[arg]);
        
        if(filename.fail()){
            cout << " " <<  argv[arg] << ": -1" << endl; 
        } else{
        
        while(getline(filename, line)){
            counter++;
    }
        cout << " " << argv[arg] << ": " << counter << endl;
    }
    }
    filename.close();
    exit(0); // this means that the program executed correctly!
}
