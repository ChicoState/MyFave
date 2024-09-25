#include <iostream>
#include <vector>

using std::getline, std::cout, std::cin, std::endl, std::string, std::vector;

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
    getline(cin, input);    //get whole line of input instead of one word
    favorites.push_back(input);
  }while( input != "done" );

  cout << "Your favorite list:\n";
  for(int i = 0; i < favorites.size()-1; i++){  //end before last command "done"
    cout << favorites.at(i) << endl;
  }

  return 0;
}
