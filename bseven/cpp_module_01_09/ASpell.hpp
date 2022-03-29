#ifndef ASPELL_HPP
#define ASPELL_HPP

#include "ATarget.hpp"
#include <iostream>

class ATarget;

using std::string;
using std::cout;
using std::endl;

class ASpell {
    private:
        string name;
        string effects;
    public:
        ASpell();
        virtual ~ASpell();
        ASpell(const ASpell &copy);
        ASpell &operator=(const ASpell &obj);

        const string &getName() const;
        const string &getEffects() const;     

        ASpell(string name, string effects);

        virtual ASpell *clone() const = 0;

        void launch(const ATarget &target);
        
};

#endif