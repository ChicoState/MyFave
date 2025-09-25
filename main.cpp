#include <iostream>
#include <vector>

using std::cout, std::cin, std::endl, std::string, std::vector;

int main()
{
  string input;
  vector <string> favorites;

  cout << "At any time, type DONE to stop recording favorites.\n";

  bool first_run = true;
  while (input != "DONE")
  {
    if (first_run == false) {
      favorites.push_back(input);
    }
    else {
      first_run = false;
    }
    
    if( favorites.size() == 0 )
      cout << "What is your favorite?\n";
    else
      cout << "What is your next favorite?\n";
  
    getline(cin,input);
  }

  cout << "Your favorite list:\n";
  for(int i = 0; i < favorites.size(); i++) // whole list printed
    cout << favorites.at(i) << endl;

  return 0;
}