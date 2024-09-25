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
    cin >> input; //fixing code here to accept 1 word using getline
    list.push_back(input);
  }while( input != "done" );

  cout << "Your favorite list:\n";
  for(int i = 0; i < list.size(); i++){
    cout << list.at(i) << endl; //fix code here so it won't output 'done' at the end
  }

  return 0;
}
