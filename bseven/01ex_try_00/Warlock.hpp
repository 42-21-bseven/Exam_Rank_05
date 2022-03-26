#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>

using std::cout;
using std::string;
using std::endl;


class Warlock {
	private:
		string name;
		string title;
		std::vector<ASpell *> array;

		Warlock();
		Warlock(const Warlock &copy);
		Warlock &operator=(const Warlock &obj);
	public:
		Warlock(string name, std::string title);
		~Warlock();

		const string &getName() const;
		const string &getTitle() const;
		void setTitle(const string str);

		void introduce() const;

		void learnSpell(ASpell *spell);
		void forgetSpell(string spellName);
		void lunchSpell(string spellName, ATarget &target);

};

#endif