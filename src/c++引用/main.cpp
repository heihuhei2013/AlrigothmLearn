//
// Created by mac on 2020/4/23.
//
#include <iostream>
#include <string>

using namespace std;


class Person {

private:
    string *_name;

public:
    Person() : _name(new string("")) {
        std::cout << "Person()" << std::endl;
    }

    virtual ~Person() {
        if (this->_name) {
            delete _name;
        }

        std::cout << "~Person()" << std::endl;
    }

};

int main() {
    std::cout << "c++引用: Hello, World!" << std::endl;

    //1
    int a = 10;
    int &ra = a;

    int b = ra;

    ra = 20;

    //2
    Person *p1 = new Person();
    Person &rp = *p1;

    Person &rp2 = *p1;

    delete p1;

    std::cout << "c++引用: end!" << std::endl;

}

求一个字符串的最长回文子串

        详细描述

输入一个字符串，求该字符串的最长的回文子串

        输入输出描述

输入描述

        abcbuu

输出描述

        abcbuu有两个回文子串，分别为bcb和uu，输出最长的回文子串即为bcb


#include <iostream>
#include <vector>


void DebugStrings(int index1,int index2,std::vector<char> &strings)
{
    for(int index = index1;index <= index2;index++)
    {
        char c = strings[index];
        std::cout <<c;
    }
    std::cout << std::endl;
}

bool isHunWenString(int index1,int index2,std::vector<char> &strings)
{
    bool
    while(1){

    }
}

int main()
{
    std::cout << "main" << std::endl;

    std::vector<char> strings = {'a','b','c','b','u','u','a'};

    using StringsIterator = std::vector<char>::iterator;
    for(StringsIterator iterator = strings.begin();iterator != strings.end();iterator++)
    {
        char c = *iterator;
        // std::cout <<c<<std::endl;
    }

    // StringsIterator ite1 = strings.begin();
    // StringsIterator ite2 = strings.end();

    int index1 = 0;
    int index2 = 0;

    int maxLenght = 0;

    int resultIndex1 = 0;
    int resultIndex2 = 0;



    for (int i = 0;i<strings.size();i++)
    {
        char c1 = strings.at(i);

        for (int j = strings.size() - 1;j >= 0;j--)
        {
            if (i < j) {
                char c2 = strings.at(j);
                if (c1 == c2) {
                    // DebugStrings(i,j,strings);
                    if ( (j - i) > maxLenght) {
                        maxLenght = (j-i);
                        resultIndex1 = i;
                        resultIndex2 = j;
                    }
                }
            }
        }
    }

    DebugStrings(resultIndex1,resultIndex2,strings);

    return 0;
}
