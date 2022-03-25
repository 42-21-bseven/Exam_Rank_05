#include "Warlock.hpp"

Warlock::Warlock(string name, string title) : name(name), title(title) { cout << this->name << ": This looks like another boring day." << endl; }
Warlock::~Warlock() { cout << name << ": " << "My job here is done!\n"; }

const string &Warlock::getName() const { return this->name;}
const string &Warlock::getTitle() const { return title;}
void Warlock::setTitle(string const &str) { this->title = str; }

void Warlock::introduce() const { cout << name << ": I'am " << name << ", " << title << "!" << endl; }