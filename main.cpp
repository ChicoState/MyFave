#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main()
{
  string input = "";
  vector <string> favorites;

  cout << "At any time, type DONE to stop recording favorites.\n";

  do
  {
    if( favorites.size() == 0){
      cout << "What is your favorite?\n";
    }
    else if (input != "DONE"){
      cout << "What is your next favorite?\n";
    }
    
    getline(cin,input);
    
    if (input != "DONE") {
      favorites.push_back(input);
    }
  }
  while( input != "DONE" );
  
  cout << "Your favorite list:\n";
  for(int i = 0; i < favorites.size() -1; i++)
    cout << favorites.at(i) << endl;

  return 0;
}
