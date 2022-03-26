#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

#include <vector>
#include "ASpell.hpp"

using std::vector;

class SpellBook {
private:
    vector<ASpell *> arr;

	SpellBook(const SpellBook &copy);
	SpellBook &operator=(const SpellBook &obj);
public:
	SpellBook();
	~SpellBook();

    void learnSpell(ASpell*);
    void forgetSpell(string const &);
    ASpell* createSpell(string const &);

};

#endif