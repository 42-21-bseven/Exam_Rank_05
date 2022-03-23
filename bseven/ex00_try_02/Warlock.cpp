//
// Created by Brooks Seven on 3/18/22.
//

#include "Warlock.hpp"

using namespace std;

Warlock::Warlock(string name, string title) : name(name), title(title){cout << name << ": This looks like another boring day." << title << endl;}
Warlock::~Warlock() {cout << name <<": My job here is done!" << endl;}

const string &Warlock::getName() const {return name;}
const string &Warlock::getTitle() const {return title;}

void Warlock::setTitle(const string &str) {}

void Warlock::introduce() const{cout << name << ": I'm " << name << ", "<< title << "!" << endl;}
