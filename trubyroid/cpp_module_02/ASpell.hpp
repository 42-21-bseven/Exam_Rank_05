#ifndef ASPELL_HPP
#define ASPELL_HPP

# include <iostream>
# include "ATarget.hpp"

class ATarget;

using std::string;
using std::cout;
using std::endl;

class ASpell {
    protected:
        string name;
        string effects;
    public:
        ASpell();
        ASpell(string name, string effects);
        virtual ~ASpell();
        ASpell(const ASpell &copy);

        ASpell &operator=(const ASpell &obj);
        
        const string &getName() const;
        const string &getEffects() const;

        virtual ASpell *clone() const = 0;

        void launch(ATarget &target) const;
};

#endif