#ifndef QUEUE_H
#define QUEUE_H

#include <vector>
#include "Person.h"

class Queue {
    private:
        vector <Person*> people_;
        int size_;
        int capacity_;

    public:
        Queue(int cap = 10);
        ~Queue();
        Queue(const Queue& other);

        int getSize() const;
        int getCap() const;

        void setCap (int c);

        string addPerson(const Person *p);
        Person removePerson();

        void displayQueue() const;

    };

#endif