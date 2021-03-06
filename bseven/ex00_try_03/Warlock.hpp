#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>

using std::cout;
using std::string;
using std::endl;


class Warlock {
private:
	string name;
	std::string title;

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

};

#endif