#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>

using namespace std;

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

		const string &GetName() const;
		const string &GetTitle() const;
		void SetTitle(const string &str);

		void introduse() const;
};

#endif