#include <iostream>

enum Weapons {
  Empty = 0,
  Paper,
  Rock,
  Scissor
};

Weapons player1 = Weapons::Empty;
Weapons player2 = Weapons::Empty;

void PrintWeapons(){
  std::cout << "Choose your weapon:\n";
  std::cout << "1) Paper\n";
  std::cout << "2) Rock\n";
  std:: cout << "3) Scissor\n";
}

Weapons GetChoosenWeapon(){
  std::string weaponNumber;
  std::getline(std::cin, weaponNumber);

  if(weaponNumber == "1"){
    std::cout << "You took Paper\n";

    return Weapons::Paper;
  }
  else if (weaponNumber == "2"){
    std::cout << "You took Rock\n";

    return Weapons::Rock;
  }
  else if (weaponNumber == "3"){
    std::cout << "You took Scissor\n";

    return Weapons::Scissor;
  }else {
    return Weapons::Empty;
  }
}

void ShowResult(){
  if(player1 == player2){
    std::cout << "Unentschieden!\n";
    return;
  }
  
  if (player1 == Weapons::Paper && player2 == Weapons::Rock ||
      player1 == Weapons::Rock && player2 == Weapons::Scissor ||
      player1 == Weapons::Scissor && player2 == Weapons::Paper)
  {
    std::cout << "Player 1 wins\n";
  }else {
    std::cout << "Player 2 wins\n";
  }
}


int main() {

  do
  {
    PrintWeapons();
    player1 = GetChoosenWeapon();
  } while (player1 == Weapons::Empty);

  do
  {
    PrintWeapons();
    player2 = GetChoosenWeapon();
  } while (player2 == Weapons::Empty);

  ShowResult();

  return 0;
}

