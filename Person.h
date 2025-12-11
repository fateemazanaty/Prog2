#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>

using namespace std;

class Person {
    private:
        string first_name;
        bool confirmed_;
    public:
        Person();
        Person(const string fname);
        ~Person();
        Person(const Person& other);
        void setConfirmed(const bool cnf);
        void setFirstName(const string fname);
        bool isConfirmed();
        string getFirstName() const;

};

#endif