#include "Warlock.hpp"

Warlock::Warlock(string name, string title) : name(name), title(title) { cout << name << ": This looks like another boring day.\n"; }
Warlock::~Warlock() { cout << name << ": My job here is done!\n"; }

const string &Warlock::getName() const { return name; }
const string &Warlock::getTitle() const { return title; }
void Warlock::setTitle(const string &str) { title = str; }

void Warlock::introduce() const { cout << name << ": I am " << name << ", " << title << "!\n"; }

void Warlock::learnSpell(ASpell *spell) { book.learnSpell(spell); }

void Warlock::forgetSpell(string spellName) { book.forgetSpell(spellName); }

void Warlock::launchSpell(string spellName, ATarget &target) {
    ASpell* spell = book.createSpell(spellName);

    if (spell) {
        spell->launch(target);
    }
}