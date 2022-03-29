#include "SpellBook.hpp"

SpellBook::SpellBook(){}
SpellBook::~SpellBook(){}

void SpellBook::learnSpell(ASpell *spell) {
    vector<ASpell *>::iterator it_begin = this->arr.begin();
    vector<ASpell *>::iterator it_end = this->arr.end();

    if(spell) {
        while (it_begin != it_end) {
            if ((*it_begin)->getName() == spell->getName())
                return ;            
            it_begin++;
        }
        this->arr.push_back(spell->clone());
    }
}

void SpellBook::forgetSpell(string const &spellName) {
    vector<ASpell *>::iterator it_begin = this->arr.begin();
    vector<ASpell *>::iterator it_end = this->arr.end();

    while (it_begin != it_end) {
        if ((*it_begin)->getName() == spellName){
            delete *it_begin;
            this->arr.erase(it_begin);
            return ;
        }        
        it_begin++;
    }
}

ASpell *SpellBook::createSpell(string const &spellName) {
    vector<ASpell *>::iterator it_begin = this->arr.begin();
    vector<ASpell *>::iterator it_end = this->arr.end();

    while (it_begin != it_end) {
        if ((*it_begin)->getName() == spellName){
            return *it_begin;
        }
        it_begin++;
    }    
    return NULL;
}