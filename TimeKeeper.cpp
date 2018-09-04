#include <iostream>
#include <stdio.h>
#include <stdlib.h>

void choose(int);
void newTimer();
void checkTimer();
void editCats();
void editEvents();
void exp();
void reset();

int choice;

using namespace std;

int main(int argc, char const *argv[]) {
  std::cout << "Choose an option\n" << "1. Start Timer\n" << "2. Check Timer\n" << "3. Edit Categories\n" << "4. Edit Events\n" << "5. Export\n" << "6. Reset Timer\n" << "7. Exit" << endl;

  std::cin >> choice;
  choose(choice);

  return 0;
}

void choose(int choice){
  switch (choice) {
    case 1:
      std::cout << "Pressed 1" << '\n';
      newTimer();
      break;
    case 2:
      std::cout << "Pressed 2" << '\n';
      checkTimer();
      break;
    case 3:
      std::cout << "Pressed 3" << '\n';
      editCats();
      break;
    case 4:
      std::cout << "Pressed 4" << '\n';
      editEvents();
      break;
    case 5:
      std::cout << "Pressed 5" << '\n';
      exp();
      break;
    case 6:
      std::cout << "Pressed 6" << '\n';
      reset();
      break;
    case 7:
      std::cout << "Pressed 7" << '\n';
      exit(0);
      break;
    default:
      std::cout << "Something bad happened!" << '\n';
      exit(0);
      break;
  }
}

void newTimer(){
  std::cout << "newTimer" << '\n';
}

void checkTimer(){
  std::cout << "checkTimer" << '\n';
}

void editCats(){
  std::cout << "editCats" << '\n';
}

void editEvents(){
  std::cout << "editEvents" << '\n';
}

void exp(){
  std::cout << "exp" << '\n';
}

void reset(){
  std::cout << "reset" << '\n';
}
