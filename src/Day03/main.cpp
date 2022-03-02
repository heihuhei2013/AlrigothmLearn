//
// Created by mac on 2019-05-20.
//
#include <iostream>
#include <vector>

class Task {
public:
    int time;
    int state;

public:
    Task(int time,int state):time(time),state(state) {

    }


};

void DebugPrint(std::vector<Task> &tasks)
{
    using  TaskIterator = std::vector<Task>::iterator;
    TaskIterator begin = tasks.begin();
    TaskIterator end = tasks.end();

    std::cout << "[Task]:start" << std::endl;
    for (TaskIterator iterator = begin; iterator != end;iterator++) {
        Task &task = *iterator;
        std::cout << "Task:time:" << task.time << ":" <<"state:" <<task.state << std::endl;
    }
    std::cout << "[Task]:end" << std::endl;
}

int main()
{
    std::cout << "Hello, World! Day03" << std::endl;

    std::vector<Task> tasks;

    tasks.push_back(Task(8,0));
    tasks.push_back(Task(6,0));
    tasks.push_back(Task(3,0));
    tasks.push_back(Task(2,0));
    tasks.push_back(Task(10,0));
    tasks.push_back(Task(3,0));

    DebugPrint(tasks);

    using  TaskIterator = std::vector<Task>::iterator;
//    TaskIterator begin = tasks.begin();
//    TaskIterator end = tasks.end();
    for (TaskIterator iterator = tasks.begin(); iterator != tasks.end();iterator++) {
        Task &task = *iterator;
        if (task.time == 3) {
            if(iterator == tasks.erase(iterator)){
                iterator--;
            }
        }
    }

    DebugPrint(tasks);


    return 0;
}

