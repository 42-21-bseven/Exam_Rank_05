//
// Created by Brooks Seven on 3/18/22.
//

#ifndef BSEVEN_WARLOCK_HPP
#define BSEVEN_WARLOCK_HPP

#include <iostream>

using namespace std;

class Warlock {
	std::string name;
	std::string title;

	Warlock();
	Warlock(const Warlock &copy);
	Warlock &operator=(const Warlock &opj);
public:

	Warlock(std::string name, std::string title);
	~Warlock();

	const string &getName() const;
	const string &getTitle() const;
	void setTitle(const string &str);

	void introduce() const;



};


#endif //BSEVEN_WARLOCK_HPP
