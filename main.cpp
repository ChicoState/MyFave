#include <iostream>
#include <vector>

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
<<<<<<< HEAD
    getline(cin, input);
    if (input != "done")
    	list.push_back(input);
=======
    cin >> input;
    favorites.push_back(input);
>>>>>>> refs/remotes/origin/main
  }while( input != "done" );

  cout << "Your favorite list:\n";
  for(int i = 0; i < favorites.size(); i++){
    cout << favorites.at(i) << endl;
  }

  return 0;
}
