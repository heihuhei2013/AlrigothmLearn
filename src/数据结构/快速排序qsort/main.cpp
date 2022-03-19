//
// Created by huhu on 2022/3/17.
//
#include <iostream>
#include <vector>
#include <functional>


class Node {
private:


public:
    int value;

    explicit Node(int value) : value(value) {

    }
};


int main() {
    std::cout << "hello 快速排序qsort" << std::endl;

    std::vector<Node> datas(10, Node(1));


    std::generate(std::begin(datas), std::end(datas), []() -> Node {
        return Node(10);
    });

    //    std::for_each(std::begin(datas),std::end(datas),[](const Node& value){
    //        std::cout << value.value  << std::endl;
    //    });
    auto foundIterater = std::begin(datas);
    do{
        foundIterater = std::find_if(foundIterater, std::end(datas), [](const Node &node) -> bool {
            return true;
        });
        foundIterater++;
    }while (foundIterater != std::end(datas));


    std::cout << foundIterater->value << std::endl;

    return 0;
}