#include <iostream>
#include <string>
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for time()

class Character {
public:
    Character(const std::string& name, int health, int attackPower)
        : name(name), health(health), attackPower(attackPower) {}

    void takeDamage(int amount) {
        health -= amount;
        if (health < 0) health = 0;
    }

    void attack(Character& target) {
        int damage = rand() % attackPower + 1; // Random damage from 1 to attackPower
        std::cout << name << " attacks " << target.name << " for " << damage << " damage!" << std::endl;
        target.takeDamage(damage);
    }

    bool isAlive() const {
        return health > 0;
    }

    void printStatus() const {
        std::cout << name << " - Health: " << health << std::endl;
    }

private:
    std::string name;
    int health;
    int attackPower;
};

void printStatus(const Character& player, const Character& monster) {
    std::cout << "\nPlayer Status:\n";
    player.printStatus();
    std::cout << "Monster Status:\n";
    monster.printStatus();
}

int main() {
    srand(static_cast<unsigned>(time(0))); // Seed the random number generator

    Character player("Hero", 100, 15);
    Character monster("Goblin", 50, 10);

    std::string command;
    while (player.isAlive() && monster.isAlive()) {
        printStatus(player, monster);

        std::cout << "\nWhat do you want to do? (attack/quit): ";
        std::cin >> command;

        if (command == "attack") {
            player.attack(monster);
            if (monster.isAlive()) {
                monster.attack(player);
            }
            else {
                std::cout << "You defeated the monster!" << std::endl;
                break;
            }
        }
        else if (command == "quit") {
            std::cout << "You chose to quit the game." << std::endl;
            break;
        }
        else {
            std::cout << "Invalid command. Please choose 'attack' or 'quit'." << std::endl;
        }
    }

    if (!player.isAlive()) {
        std::cout << "You have been defeated by the monster." << std::endl;
    }

    return 0;
}
