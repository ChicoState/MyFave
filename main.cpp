#include <iostream>
#include <vector>

using std::cout, std::cin, std::endl, std::string, std::vector;

int main(){
  string input = "";
  vector<string> list;

  do{
    if( list.empty() ){
      cout << "What is your favorite class? Enter done when finished!\n";
    }
    else{
      cout << "What is your next favorite?\n";
    }
    getline(cin,input);
    list.push_back(input);
  }while( input != "done" );

  list.pop_back();

  cout << "Your favorite list:\n";
  for(int i = 0; i < list.size(); i++){
    cout << list.at(i) << endl;
  }

  return 0;
}
