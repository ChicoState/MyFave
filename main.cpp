#include <iostream>
#include <vector>

using std::cout, std::cin, std::endl, std::string, std::vector;

int main(){
  string input = "";
  vector<string> list;

  do{
    if( list.size() == 0 ){
      cout << "What is your favorite?\n";
    }
    else{
      cout << "What is your next favorite?\n";
    }
    std::getline(cin, input);	//getline to get multi word favorites
    list.push_back(input);
  }while( input != "done" );

  cout << "Your favorite list:\n";
  for(int i = 0; i < list.size()-1; i++){ // -1 to remove done from favorite list
    cout << list.at(i) << endl;
  }

  return 0;
}
