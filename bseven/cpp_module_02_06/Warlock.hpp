#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>
#include <vector>
#include "ASpell.hpp"
#include "SpellBook.hpp"

using std::string;
using std::cout;
using std::endl;
using std::vector;

class Warlock {
    private:
        string name;
        string title;
        SpellBook book;

        Warlock();
        Warlock(const Warlock &copy);
        Warlock &operator=(const Warlock &obj);
    public:
        Warlock(string name, string title);
        ~Warlock();

        const string &getName() const;
        const string &getTitle() const;
        void setTitle(const string &str);

        void introduce() const;

        void learnSpell(ASpell *spell);
        void forgetSpell(string spellName);
        void launchSpell(string spellName, ATarget &target);


};
#endif