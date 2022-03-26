#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include "iostream"

using std::cout;
using std::string;
using std::endl;

class Warlock {
    private:
        string name;
        string title;

        Warlock();
        Warlock(const Warlock &copy);
        Warlock &operator=(const Warlock &obj);
    public:
        Warlock(string name, string title);
        ~Warlock();

        const string &getName() const;
        const string &getTitle() const;
        void setTitle(string const &str);

        void introduce() const;

};

#endif