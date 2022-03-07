//
// Created by mac on 2020/4/29.
//

#ifndef C_PERSON_HPP
#define C_PERSON_HPP


class Person {

public:

    Person();

    Person(const Person &p);

    Person &operator=(const Person &p);

    ~Person();

};


#endif //C_PERSON_HPP
