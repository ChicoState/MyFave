#include <iostream>
#include <vector>

using std::cout;
using std::cin; 
using std::endl;
using std::string;
using std::vector;

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
    if(input != "done") {
      list.push_back(input);
    }

  }while( input != "done" );

  cout << "Your favorite list:\n";
  for(int i = 0; i < favorites.size(); i++){
    cout << favorites.at(i) << endl;
  }

  return 0;
}