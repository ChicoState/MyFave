#include <iostream>
#include <vector>
#include <iostream>
#include <string>

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
    //cin >> input;
    while(getline(cin, input))
    {
      if(input == "done")
      {
        break;
      }
      list.push_back(input);
    }
   // list.push_back(getline(cin, input));
    //list.push_back(input);
  }while( input != "done" );

  cout << "Your favorite list:\n";
  for(int i = 0; i < list.size(); i++){
    cout << list.at(i) << endl;
  }

  return 0;
}