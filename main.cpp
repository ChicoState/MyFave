#include <iostream>
#include <vector>

using std::cout, std::cin, std::endl, std::string, std::vector;

int main()
{
  string input = "";
  vector <string> favorites;

  cout << "At any time, type DONE to stop recording favorites.\n";

  while (true)
  {
    if( favorites.size() == 0 )
      cout << "What is your favorite?\n";

    else
      cout << "What is your next favorite?\n";
  
    getline(cin,input);
    if (input == "DONE"){
        break;
    }
    favorites.push_back(input);
  }

  cout << "Your favorite list:\n";
  for(int i = 0; i < favorites.size(); i++)
  {
    cout << favorites.at(i) << endl;
  }

  return 0;
}
