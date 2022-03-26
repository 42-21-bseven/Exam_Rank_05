#ifndef TARGETGENERATOR_HPP
#define TARGETGENERATOR_HPP

#include <vector>
#include "ATarget.hpp"

using std::vector;

class TargetGenerator {
private:
    vector<ATarget *> arr;

	TargetGenerator(const TargetGenerator &copy);
	TargetGenerator &operator=(const TargetGenerator &obj);
public:
	TargetGenerator();
	~TargetGenerator();

    void learnTargetType(ATarget*);
    void forgetTargetType(string const &);
    ATarget* createTarget(string const &);

};

#endif