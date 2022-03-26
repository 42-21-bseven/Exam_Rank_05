#include "Warlock.hpp"

Warlock::Warlock(string name, string title) : name(name), title(title) {
	cout << name << ": This looks like another boring day." << endl;
}
Warlock::~Warlock() {cout << name << ": My job here is done!" << endl;}

const string &Warlock::getName() const {return name;}
const string &Warlock::getTitle() const {return title;}

void Warlock::setTitle(const string &str) {Warlock::title = str;}
void Warlock::introduce() const {cout << name << ": I am " << name << ", " << title << "!" << endl;}

void Warlock::learnSpell(ASpell *spell) {
    vector<ASpell *>::iterator it_begin = this->arr.begin();
    vector<ASpell *>::iterator it_end = this->arr.end();

    if (spell) {
        while (it_begin != it_end) {
            if ((*it_begin)->getName() == spell->getName())
                return ;
            it_begin++;
        }
        this->arr.push_back(spell->clone());
    }
}

void Warlock::forgetSpell(string spellName) {
    vector<ASpell *>::iterator it_begin = this->arr.begin();
    vector<ASpell *>::iterator it_end = this->arr.end();

    while (it_begin != it_end) {
        if ((*it_begin)->getName() == spellName) {
            delete *it_begin;
            this->arr.erase(it_begin);
            return ;
        }
        it_begin++;
    }
}

void Warlock::launchSpell(string spellName, ATarget &target) {
    vector<ASpell *>::iterator it_begin = this->arr.begin();
    vector<ASpell *>::iterator it_end = this->arr.end();

    while (it_begin != it_end) {
        if ((*it_begin)->getName() == spellName) {
            (*it_begin)->launch(target);
            return ;
        }
        it_begin++;
    }
}
