/*******************************************************************
 * Name: Suzan Abdelqader
 * Class: CS 4420
 * Professor: Professor Osterman
 * Program: Filesize.cc
 * Description: This program will take in a file(s) and output the amount of lines in each file.
 ********************************************************************/
#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[])
{
    ifstream filename; //name for file 
     string line; //holds a line in the file
        cout << "program: " << argv[0] << endl; //prints to console name of program
    // just to get you started, this is how to refer to the arguments that were passed
    for (int arg = 1; arg < argc; arg++){ //increments the amount of arguements to get through all the files if there is more than 1
                int counter = 0; //represents amount of lines in the file
        filename.open(argv[arg]); //opens the file 
        
        if(filename.fail()){ // checks if file has failed to open/unreadable
            cout << " " <<  argv[arg] << ": -1" << endl; //if the file doesnt open a -1 is outputted to the console
        } else{
        
        while(getline(filename, line)){ //if the file is openable goes through each line
            counter++; //every line that is found the counter is incremented
    }
        cout << " " << argv[arg] << ": " << counter << endl; // prints amoutn of lines in each file to the screen
        filename.close(); //closes the file
    }
    }
    exit(0); // this means that the program executed correctly!
}
