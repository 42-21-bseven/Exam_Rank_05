#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}
TargetGenerator::~TargetGenerator() {}

void TargetGenerator::learnTargetType(ATarget*target) {
    vector<ATarget *>::iterator it_begin = this->arr.begin();
    vector<ATarget *>::iterator it_end = this->arr.end();

    if (target) {
        while (it_begin != it_end) {
            if((*it_begin)->getType() == target->getType())
                return ;
            it_begin++;
        }
        this->arr.push_back(target->clone());
    }
}

void TargetGenerator::forgetTargetType(string const &spellName) {
    vector<ATarget *>::iterator it_begin = this->arr.begin();
    vector<ATarget *>::iterator it_end = this->arr.end();

    while (it_begin != it_end) {
        if((*it_begin)->getType() == spellName) {
            delete *it_begin;
            this->arr.erase(it_begin);
            return ;
        }
        it_begin++;
    }
}

ATarget* TargetGenerator::createTarget(string const &spellName) {
    vector<ATarget *>::iterator it_begin = this->arr.begin();
    vector<ATarget *>::iterator it_end = this->arr.end();

    while (it_begin != it_end) {
        if((*it_begin)->getType() == spellName){
            return *it_begin;
        }
        it_begin++;
    }
    return NULL;
}