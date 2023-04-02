#include <iostream>
using namespace std;

// Classes
class GameStructure { // Base class/parent/super
public: // Attributes or Data members

public: // Methods
    virtual void help() {
        cout << "This is a help method I guess" << endl;
    }
};

class Character : public GameStructure { // Character class inheriting from GameStructure
private: // Attributes or Data members
    int health; // Create one private property called Health

public: // Attributes or Data members
    string name;

public: // Methods
    void setHealth(int setHealth) { // Create getter and setter public methods
        if (health <= 0) {
            health = 0;
            cout << "Character has Expired..." << endl;
        }
        else {
            health = setHealth;
        }
    }

    string getHealth() {
        cout << health << endl;
        // return health; -- Returning health throws an error for some reason
    }

    void Talk(string stuffToSay) {    // Create 2 methods named Talk using Overloading Polymorphism
        cout << "My name is " << name << endl;
        cout << stuffToSay << endl;
    }

    void Talk(string name, string stuffToSay) {
        cout << "My name is " << name << endl;
        cout << stuffToSay << endl;
    }

    // Create a virtual attack method in the Character class that returns 10 hit points.
    virtual void attack() {
        float hitPoints = 10;
        return hitPoints; // it doesnt work, why? not a clue. the point of this? also no clue
    }

    virtual void help() {
        cout << "Character class has overridden help" << endl;
    }
};

class Ninja : public Character { // Create 2 classes which inherit from the Character class
public: // Attributes or Data members

public: // Methods
    Ninja(string name) { // Construct explicitly
        this->name = name;
    }

    void ThrowStars() {
        cout << "I am throwing stars!" << endl; // Create a method called ThrowStars
    }

    // Create an override attack method
    virtual void attack() {
        float hitPoints = 25;
        return hitPoints; 
    }

    virtual void help() {
        cout << "Ninja class has overridden help" << endl;
    }
};

class Pirate : public Character { // Create 2 classes which inherit from the Character class
public: // Attributes or Data members

public: // Methods
    Pirate(string name) { // Construct explicitly
        this->name = name;

    }

    void UseSword() {
        cout << "I am Swooshing my Sword!" << endl; // Create a method called UseSword
    }

    // Create an override attack method
    virtual void attack() {
        float hitPoints = 25;
        return hitPoints;
    }

    virtual void help() {
        cout << "Pirate class has overridden help" << endl;
    }
};


int main()
{
    // Display intro for game
    cout << "Hello! And welcome to Pirates vs. Ninjas!" << endl;

    // game loop with exit choice after game
    Pirate pirate1("Pirate Jim");
    Ninja ninja1("Ninja Floyd");

    pirate1.UseSword();
    ninja1.ThrowStars();

    pirate1.Talk("Arg Matey!");
    ninja1.Talk("Patience is key!");
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu