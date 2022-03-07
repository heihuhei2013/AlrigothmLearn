//
// Created by huhu on 2022/3/2.
//

#include <iostream>
#include <vector>


class Task {
private:
    int time;
    int state;
public:
    Task(int time,int state){
        this->time = time;
        this->state = state;
    }

    void setTime(int time)
    {
        this->time = time;
    }

    int getTime() const
    {
        return this->time;
    }

    void setState(int state)
    {
        this->state = state;
    }

    int getState() const
    {
        return this->state;
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
        std::cout << "Task:time:" << task.getTime() << ":" <<"state:" <<task.getState() << std::endl;
    }
    std::cout << "[Task]:end" << std::endl;
}

int main()
{
    std::cout << "Hello, World! STL01" << std::endl;

    std::vector<Task> tasks;

    tasks.push_back(Task(8,0));
    tasks.push_back(Task(6,0));
    tasks.push_back(Task(3,0));
    tasks.push_back(Task(2,0));
    tasks.push_back(Task(10,0));
    tasks.push_back(Task(3,0));

    DebugPrint(tasks);

    using  TaskIterator = std::vector<Task>::iterator;
//    std::find()


    std::cout << "Hello, World! Bye" << std::endl;

    return 0;
}
