#include <iostream>
#include <vector>

using std::cout, std::cin, std::endl, std::string, std::vector;

int main() {
    string input = "";
    vector<string> list;

    for (;;) {
        if (list.size() == 0) {
            cout << "What is your favorite?\n";
        } else {
            cout << "What is your next favorite?\n";
        }

        if (!std::getline(cin, input)) {
            std::cerr << "error when retrieving input from stdin\n";
            return 1;
        }

        if (input == "done") {
            break;
        }

        list.push_back(input);
    }

    cout << "Your favorite list:\n";

    for (int i = 0; i < list.size(); i++) {
        cout << list[i] << endl;
    }

    return 0;
}
