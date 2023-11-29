#include "AdvanceTicket.h"
#include "studentAdvanceTicket.h"
#include "ticket.h"
#include "walkupTicket.h"
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  char choice;
  Ticket *t;
  cout << "--- Welcome to Ticket Sale Booth ---" << endl;
  do {

    cout << "1. Walkup Ticket" << endl;
    cout << "2. Advance Ticket" << endl;
    cout << "3. Student Advance Ticket" << endl;
    cout << "4. Quit" << endl;
    cout << "Please Enter your selection: ";
    cin >> choice;

    switch (choice) {
    case '1':
      t = new WalkupTicket();
      break;
    case '2':

      int days1;
      cout << "Enter days before event: ";
      cin >> days1;
      t = new AdvanceTicket(days1);
      break;
    case '3':
      int days2;
      cout << "Enter days before event: ";
      cin >> days2;
      t = new StudentAdvanceTicket(days2);
      break;
    case '4':
      cout << "Enjoy the event!!!" << endl;
    default:
      exit(0);
    }
    cout << "Ticket Number: " << setfill('0') << setw(4) << rand() % 10000
         << endl;
    cout << "Price: $" << fixed << setprecision(2) << t->getPrice() << endl;
    delete t;

    cout << "------------------------------" << endl;
    cout << "Would you like to purchase another ticket? (y/n): ";
    cin >> choice;
  } while (choice == 'y');
  cout << "Enjoy the event!!!" << endl;
}
