#include <iostream>

class Player {
public:
  void play() { std::cout << "The player is playing cricket." << std::endl; }
};

class Batsman : public Player {
public:
  void play() { std::cout << "The batsman is batting." << std::endl; }
};

class Bowler : public Player {
public:
  void play() { std::cout << "The bowler is bowling." << std::endl; }
};

int main() {
  Batsman batsman;
  Bowler bowler;

  batsman.play(); // Calls the play() method of Batsman class
  bowler.play();  // Calls the play() method of Bowler class

  return 0;
}
