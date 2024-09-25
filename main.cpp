#include <iostream>
#include <vector>
#include <string>

using std::cout, std::cin, std::endl, std::string, std::vector;

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
    if (input != "done"){
      favorites.push_back(input);
    }
    
  }while( input != "done" );

  cout << "Your favorite favorites:\n";
  for(int i = 0; i < favorites.size(); i++){
    cout << favorites.at(i) << endl;
  }

  return 0;
}