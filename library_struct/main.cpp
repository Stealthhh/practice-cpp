#include <iostream>
using namespace std;

const int NUM_USERS = 10; // number of users
const int NUM_TOP_USERS = 5; // number of users to print message for

struct LibraryUser {
  string name;
  string department;
  int numBooks;
};

int main() {
  LibraryUser users[NUM_USERS];
  int maxUsers[NUM_TOP_USERS];
  for (int i = 0; i < NUM_TOP_USERS; i++) {
    maxUsers[i] = -1;
  }
  for (int i = 0; i < NUM_USERS; i++) {
    // get user information
    cout << "Enter user's name: ";
    cin >> users[i].name;
    cout << "Enter user's department: ";
    cin >> users[i].department;
    cout << "Enter number of books on user's account: ";
    cin >> users[i].numBooks;
    cout << endl;
    // update maxUsers
    for (int j = 0; j < NUM_TOP_USERS; j++) {
        if (users[i].numBooks > users[maxUsers[j]].numBooks) {
            for (int k = NUM_TOP_USERS-1; k > j; k--) {
                maxUsers[k] = maxUsers[k-1];
            }
            maxUsers[j] = i;
            break;
        }
    }
  }
  // print message for top users
  cout << "Top " << NUM_TOP_USERS << " users with the most books:" << endl;
  for (int i = 0; i < NUM_TOP_USERS; i++) {
    if (maxUsers[i] != -1) {
      cout << users[maxUsers[i]].name << " from " << users[maxUsers[i]].department << " has " << users[maxUsers[i]].numBooks << " books on their account." << endl;
    }
  }
  return 0;
}