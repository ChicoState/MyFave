#include <iostream>
#include <vector>

using std::cout, std::cin, std::endl, std::string, std::vector, std::getline;

int main(){
  string input = "";
  vector<string> list;

  do{
    if( list.empty() ){
      cout << "What is your favorite?\n";
    }
    else{
      cout << "What is your next favorite?\n";
    }
    //cin >> input;
    getline(cin,input);
    if(input != "done" && input != "Done"){
      list.push_back(input);
    }
  }
  while( input != "done" && input != "Done" );

  cout << "Your favorite list:\n";
  for(int i = 0; i < list.size(); i++){
    cout << list.at(i) << endl;
  }
  return 0;
}