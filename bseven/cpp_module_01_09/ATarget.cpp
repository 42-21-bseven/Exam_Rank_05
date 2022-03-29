#include "ATarget.hpp"

ATarget::ATarget() {}
ATarget::~ATarget() {}
ATarget::ATarget(const ATarget &copy) { *this =copy; }
ATarget &ATarget::operator=(const ATarget &obj) {
    this->type = obj.getType();
    return *this;
}

const string &ATarget::getType() const { return type; }

ATarget::ATarget(string type) : type(type) {}

void ATarget::launch(const ASpell &spell) { cout << type << " has been " << spell.getEffects() << "!\n"; }