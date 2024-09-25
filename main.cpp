#include <iostream>
#include <vector>
#include <string>
using std::cout, std::cin, std::endl, std::string, std::vector, std::getline;

int main(){
  string input = "";
  vector<string> favorites;

  do{
    if( favorites.size() == 0 ){
      cout << "What is your favorite?\n";
    }
    else{
      cout << "What is your next favorite?\n";
    }

    getline(cin, input);
    favorites.push_back(input);
  }while( input != "done" );


  favorites.pop_back();

  cout << "Your favorite list:\n";
  for(int i = 0; i < favorites.size(); i++){
    cout << favorites.at(i) << endl;
  }

  return 0;
}
