//
// Created by huhu on 2022/3/2.
//

#include <iostream>
#include <vector>

/*
 * 求一个字符串的最长回文子串

详细描述

输入一个字符串，求该字符串的最长的回文子串

输入输出描述

输入描述

abcbuu

输出描述

abcbuu有两个回文子串，分别为bcb和uu，输出最长的回文子串即为bcb

 */

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
    int tmpIndex1 = index1;
    int tempIndex2 = index2;

    bool  isHunwen = true;
    while(1){
        if (tmpIndex1 > tempIndex2){
            break;
        }
        char c1 = strings[tmpIndex1];
        char c2 = strings[tempIndex2];
        if (c1 == c2) {
            tmpIndex1 ++;
            tempIndex2 --;
        } else {
            isHunwen = false;
            break;
        }
    }
    return isHunwen;
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

        for (int j = strings.size() - 1;j > i;j--)
        {
            if (i < j) {
                char c2 = strings.at(j);
                if ( isHunWenString(i,j,strings)) {
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