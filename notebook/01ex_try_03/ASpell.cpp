#include "ASpell.hpp"

ASpell::ASpell() {}
ASpell::~ASpell() {}
ASpell::ASpell(const ASpell &copy) { *this = copy; }
ASpell &ASpell::operator=(const ASpell &obj) {
    this->name = obj.getName();
    this->effects = obj.getEffect();
    return *this;
}

const string &ASpell::getName() const { return name; }
const string &ASpell::getEffect() const { return effects; }


ASpell::ASpell(string name, string effects) : name(name), effects(effects) {}

void ASpell::launch(ATarget &target) const { target.getHitBySpell(*this); }