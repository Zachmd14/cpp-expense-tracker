#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  // Your code here

  cout << "\n===== EXPENSE TRACKER =====\n";

  // User input the menu he want to go to
  cout << "Menu selection : ";
  int menuSelection;
  cin >> menuSelection;

  switch (menuSelection) {
  case 1:
    cout << "\nyou selected 1\n";
    break;
  case 2:
    cout << "\nyou selected 2\n";
    break;
  case 3:
    cout << "\nyou selected 3\n";
    break;
  case 4:
    cout << "\nyou selected 4\n";
    break;
  case 5:
    cout << "\nyou selected 5\n";
    break;
  default:
    cout << "\nNah, wrong option mate...";
    break;
  }

  return 0;
}
