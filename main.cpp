#include <iostream>
#include <vector>

using std::cout, std::cin, std::endl, std::string, std::vector;

int main(){
  string input = "";
  vector<string> favorites;

  cout << "At any time, type DONE to stop recording favorites.\n";

  do
  {
    if( favorites.size() == 0 ){
      cout << "What is your favorite?\n";
    }
    else{
      cout << "What is your next favorite?\n";
    }
    getline(cin,input);
    favorites.push_back(input);

    if(input != "DONE") {
      favorites.push_back(input);
    }

  }while( input != "DONE" );

  cout << "Your favorite list:\n";
   for(const auto& favorite : favorites) {
    cout << favorite << endl;
  }

  return 0;
}