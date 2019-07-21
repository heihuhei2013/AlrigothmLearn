#include <iostream>
#include <pthread.h>

int main()
{
    std::cout << "Hello, World! Day03" << std::endl;

    uint8_t  a = 10;

    pthread_mutex_t mutex;
    pthread_mutex_init(&mutex,NULL);



    std::cout << "Hello, World! Bye" << std::endl;


    return 0;
}
