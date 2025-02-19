#include <iostream>
#include <vector>

using std::cout, std::cin, std::endl, std::string, std::vector;

int main() {
    string input = "";
    vector<string> favorites;

    cout << "At any time, type DONE to stop recording favorites.\n";

    while (true) {
        if (favorites.empty()) {
            cout << "What is your favorite?\n";
        } else {
            cout << "What is your next favorite?\n";
        }

        getline(cin, input);

        // 🔹 Fix: Don't add "DONE" to the list
        if (input == "DONE") {
            break;  // Stop input loop
        }

        favorites.push_back(input);
    }

    // 🔹 Fix: Print the full list correctly
    cout << "Your favorite list:\n";
    for (const string& item : favorites) {
        cout << item << endl;
    }

    return 0;
}
