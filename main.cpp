#include <iostream>
#include <vector>

[![Build C++](https://github.com/legendspy-1/MyFave/actions/workflows/actions.yml/badge.svg)](https://github.com/legendspy-1/MyFave/actions/workflows/actions.yml)

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
  }while( input != "DONE" );

  cout << "Your favorite list:\n";
  for(int i = 0; i < favorites.size() -1; i++)
  {
    cout << favorites.at(i) << endl;
  }

  return 0;
}
