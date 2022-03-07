//
// Created by mac on 2020/4/29.
//

#ifndef _TEST_CONTAINER_
#define _TEST_CONTAINER_

#include <iostream>
#include <vector>
#include <stack>
#include "Person.hpp"

using namespace std;

void test_vector_container() {

    std::cout << "test_container" << std::endl;


    //vector 如果存储的是对象 会调用拷贝构造函数 拷贝一份
    std::vector<Person *> vec;

    Person *p1 = new Person();

    vec.push_back(p1);

//    delete p1;

    //释放内存
    for (vector<Person *>::iterator it = vec.begin(); it != vec.end(); it++) {
        if (NULL != *it) {
            delete *it;
            *it = NULL;
        }
    }
    vec.clear();

    //stack
    std::stack<char> cStack;
    cStack.push('a');
    cStack.push('b');

    cStack.pop();

    //stack

//    for(std::stack<char>::iterator it = cStack.begin();
//        it != cStack.end();it++) {
//
//
//    }
}

#endif