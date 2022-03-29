#ifndef ATARGET_HPP
#define ATARGET_HPP

#include "ASpell.hpp"
#include <iostream>

class ASpell;

using std::string;
using std::cout;
using std::endl;

class ATarget {
    private:
        string type;
    public:
        ATarget();
        virtual ~ATarget();
        ATarget(const ATarget &copy);
        ATarget &operator=(const ATarget &obj);

        const string &getName() const;
        const string &getEffects() const;     

        ATarget(string type);

        virtual ATarget *clone() const = 0;

        void launch(const ASpell &spell);
        
};

#endif