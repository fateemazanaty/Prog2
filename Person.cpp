#include "Person.h"

Person::Person() : first_name(""), confirmed_ (false) {}

Person::Person(const string fname) : first_name(fname), confirmed_(false){}

Person::Person(const Person& other) : first_name(other.first_name), confirmed_(other.confirmed_){}

Person::~Person () {
    
}

void Person::setFirstName(const string fname) {
    first_name = fname;
}

string Person::getFirstName() const {
    return first_name;
}

bool Person::isConfirmed() {
    return confirmed_;
}

void Person::setConfirmed(const bool cnf){
    confirmed_ = cnf;
}

