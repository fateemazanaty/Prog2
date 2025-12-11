#include "Queue.h"
#include <iostream>
using namespace std;

Queue::Queue(int cap){
    size_ = 0;
    capacity_ = cap;
    people_.reserve(capacity_);
}

Queue::Queue(const Queue &other) : capacity_(other.capacity_), size_(other.size_) {
  people_.reserve(capacity_);
 for (int i = 0 ; i < size_; i++){
    people_.push_back(new Person (*other.people_[i]));
 }
}

Queue::~Queue(){
    for(int i =0 ; i < size_ ; i++){
        delete people_ [i];
    }
    people_.clear();
}

int Queue::getSize() const {
    return size_;
}

int Queue::getCap() const{
    return capacity_;
}

void Queue::setCap(int c){
    capacity_=c;
}

string Queue::addPerson(const Person *p){
    //Person *pp = new Person (p);
    people_.push_back(new Person (*p));
    size_++;
    cout << "Person is added successfully. Size is now " << size_ << endl;
    return "Person Added"; 
}

Person Queue::removePerson(){
    Person *removedpersonptr = people_.front();  // Get first person
    //*removedpersonobj.setConfirmed(true) ;
    people_.erase(people_.begin());    // Remove from queue
    size_--;
    delete removedpersonptr;
    cout << "Person is removed successfully. Size is now " << size_ << endl;
    return *removedpersonptr;
}


void Queue::displayQueue() const{
    for (int i = 0; i < size_ ; i++){
        cout << people_[i]->getFirstName() << endl;
    }
}
