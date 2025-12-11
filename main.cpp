#include <iostream>
#include "Person.h"
#include "Queue.h"

using namespace std;

int main(){

    Person *p1 = new Person("Michael");
    Person *p2 = new Person("Mich");
    Person *p3 = new Person("Mi");
    Person *p4 = new Person("Mic");

    //Person p1("Sara");
    //Person p2("Michael");
    //Person p3("Yasmine");
    //Person p4("Omar");
    
    Queue q(3);

    q.addPerson(p1);
    q.addPerson(p2);
    q.addPerson(p3);
    q.addPerson(p4);


    q.displayQueue();

    cout<<q.getSize()<<endl;
    cout<<q.getCap()<<endl; 

    q.removePerson();
    cout<<q.getSize()<<endl;
    cout<<q.getCap()<<endl; 

    return 0;
}