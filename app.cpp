#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  // Your code here

  cout << "\n===== EXPENSE TRACKER =====\n";
  cout << "\n1 - Add Money";
  cout << "\n2 - Withdraw Money";
  cout << "\n3 - See Money Amount";

  // User input the menu he want to go to
  cout << "\nMenu selection : ";
  int menuSelection;
  cin >> menuSelection;

  switch (menuSelection) {
  case 1:
    cout << "\n===== ADD MONEY =====\n";
    break;
  case 2:
    cout << "\n===== WITHDRAW MONEY =====\n";
    break;
  case 3:
    cout << "\n===== SEE MONEY AMOUNT =====\n";
    break;

    // case 4:
    //   cout << "\n===== LATEST TRANSACTION =====\n";
    //   Gonna keep this one for latter break;

  default:
    cout << "\nNah, wrong option mate...";
    break;
  }

  return 0;
}
