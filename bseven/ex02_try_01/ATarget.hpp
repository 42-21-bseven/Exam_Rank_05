#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <iostream>
#include "ASpell.hpp"

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
        
        const string &getType() const;

        virtual ATarget *clone() const = 0;

        ATarget(string type);

        void getHitBySpell(const ASpell &spell) const;
};

#endif