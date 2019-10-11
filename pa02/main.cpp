#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argv, char** argc){
  if(argv != 3){
    cout << "Please provide 2 file names" << endl;
    return 1;
  }
  
  ifstream cardFile1 (argc[1]);
  ifstream cardFile2 (argc[2]);
  string line;

  if (cardFile1.fail()){
    cout << "Could not open file " << argc[1];
    return 1;
  }

  if (cardFile2.fail()){
    cout << "Could not open file " << argc[2];
    return 1;
  }

  // Create two objects of the class you defined 
  // to contain two sets of cards in two input files

  // Read each file and store cards
  while (getline (cardFile1, line) && (line.length() > 0)){
  }
  cardFile1.close();

  while (getline (cardFile2, line) && (line.length() > 0)){
  }
  cardFile2.close();

  // Start the game

  return 0;
}
