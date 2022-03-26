#ifndef ATARGET_HPP
#define ATARGET_HPP

# include <iostream>
# include "ASpell.hpp"

using std::string;
using std::cout;
using std::endl;

class ASpell;

class ATarget {
    protected:
        string type;
    public:
        ATarget();
        ATarget(string type);
        virtual ~ATarget();
        ATarget(const ATarget &copy);

        ATarget &operator=(const ATarget &obj);
        
        const string &getType() const;

        virtual ATarget *clone() const = 0;

        void getHitBySpell(const ASpell &spell) const;
};

#endif