#include <iostream>
#include <vector>
#include <string>

using std::cout, std::cin, std::endl, std::string, std::vector;
using std::getline;

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
    getline(cin,input);
    list.push_back(input);
  }while( input != "done" );

  cout << "Your favorite list:\n";
  for(int i = 0; i < list.size(); i++){
    cout << list.at(i) << endl;
    if(input != "done")
    cout << endl;
  }

  return 0;
}