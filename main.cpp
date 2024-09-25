#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    string input = "";
    vector<string> list;

    do {
      if (list.size() == 0) { cout << "What is your favorite?\n";}
        else { cout << "What is your next favorite?\n";}
        
      getline(cin, input);  // inputing getline
        
      if (input != "done") { list.push_back(input); } // fixing done issues
        
    } while (input != "done");

    cout << "Your favorite list:\n";
    for (const string &item : list) {
        cout << item << endl;
    }

    return 0;
}
