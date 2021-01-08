#include <iostream>

using namespace std;

//get users information to create character
// new class to store name, age, jedi or sith
class newCharacter{
  public:
      string name;
      int age;
      bool jedi;
      //declare constructor
    newCharacter(string x, int y, bool z){
      name = x;
      age = y;
      jedi = z;
    }
};

int main() {
  //var to store user input
  string newName;
  int newAge;
  bool newJedi;

  //Ask user info
  cout << "What is your name? \n";
  cin  >> newName;
  cout << "How old are you \n";
  cin  >> newAge;
  cout << "Are you a Jedi \n";
  cin  >> newJedi;

  newCharacter bossName(newName, newAge, newJedi);

  //print name value
  cout << "Name: " << bossName.name << "\n";
  cout << "Age: " << bossName.age  << "\n";
  cout << "Jedi: " << bossName.jedi;

    return 0;
}
