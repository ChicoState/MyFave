#include <iostream>
#include <vector>

using std::cout, std::cin, std::endl, std::string, std::vector;

int main(){
  string input = "";
  vector<string> favorites;
  bool isDone = false;
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
    // check for if done before pushing Done onto vector
    if(input == "DONE") { isDone = true;}
    else {favorites.push_back(input);}
  }while( !isDone );

  cout << "Your favorite list:\n";
  
  for(int i = 0; i < favorites.size(); i++)
  {
    cout << favorites.at(i) << endl;
  }

  return 0;
}