#include "ATarget.hpp"

ATarget::ATarget() {}
ATarget::~ATarget() {}

ATarget::ATarget(const ATarget &copy) { *this = copy; }
ATarget &ATarget::operator=(const ATarget &obj) {
	this->type = obj.type;
	return *this;
}

const string &ATarget::getType() const { return type; }

ATarget::ATarget(string type) : type(type){}

void ATarget::getHitBySpell(const ASpell &spell) const { cout << type << " has been " << spell.getEffects() << "!\n"; }
