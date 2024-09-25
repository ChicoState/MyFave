#include <iostream>
#include <vector>

using namespace std;

int main(){
  string input = "";
  vector<string> favorites;

  do{

    if( list.size() == 0 ) cout << "What is your favorite?\n";
    else cout << "What is your next favorite?\n";

    getline(cin, input);
    list.push_back(input);
  }while( input != "done" );

  cout << "\nYour favorite list:\n";
  for(int i = 0; i < list.size()-1; i++){
    cout << list.at(i) << endl;

  }

  return 0;
}