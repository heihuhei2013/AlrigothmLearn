//
// Created by mac on 2020/4/30.
//
#include <iostream>
#include <stack>

using namespace std;

class Solution {

public:

    bool isHappy(int n) {

        int tmpN = n;
        int lastNum = 0;
        int sum = 0;

        do {
            lastNum = getByteNum(tmpN);

            sum += (lastNum * lastNum);

            tmpN = int(tmpN / 10);
            if(tmpN == 0) {
                break;
            }
        } while (1);

        if (sum == 1) {
            return true;
        } else if(sum == 4) {
            return false;
        } else{
            return isHappy(sum);
        }
    }

    //获取个位数
    int getByteNum(int n){
        if (n == 0) {
            return -1;
        }

        if(n <= 9) {
            return n;
        } else {
            return (n % 10);
        }
    }
};

void test_stack_container() {
    std::cout << "test_stack_container begin" << std::endl;


    Solution s;
    s.isHappy(2);

    std::cout << "test_stack_container end" << std::endl;

}


