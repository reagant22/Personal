#include <iostream>
#include <cstdlib>
#include <stdlib.h>

int main() {
  srand(time(NULL));
  int computer = rand() % 3 + 1;
  int user = 0;

  std::cout << "====================\n";
  std::cout << "rock paper scissors!\n";
  std::cout << "====================\n";

  std::cout << "1) ✊\n";
  std::cout << "2) ✋\n";
  std::cout << "3) ✌️\n";

  std::cout << "shoot! ";
  std::cin >> user;

  if(user == 1){
    std::cout << "You chose ROCK\n";
  }
  else if(user ==2) {
    std::cout << "You choose PAPER\n";
  }
  else if(user ==3) {
    std::cout << "You choose SCISSORS\n";
  }

  if(computer == 1) {
    std::cout << "Computer chose ROCK\n";
  }
  else if(computer == 2) {
    std::cout << "Computer chose PAPER\n";
  }
  else {
    std::cout << "Computer chose SCISSORS\n";
  }

  if(user == computer) {
    std::cout << "TIE" << std::endl;
  }
  else if(user == 1) {
    if(computer == 2) {
      std::cout << "You LOSE\n";
    }
    if(computer == 3) {
      std::cout << "You WIN\n";
    }
  }

  else if(user == 2) {
    if(computer == 1) {
      std::cout << "You WIN\n";
    }
    if(computer == 3) {
      std::cout << "You LOSE\n";
    }
  }
  else if(user == 3){
    if(computer == 1){
      std::cout << "You LOSE\n";
    }
    if(computer == 2){
      std::cout << "You WIN\n";
    }
  }
}
