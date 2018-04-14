#include <iostream>
#include <thread>

class singleton     //懒汉 指针
{
private:
    singleton(){}
    static singleton *p;
public:
    static pthread_mutex_t mutex;
    static singleton * instance()
    {
        if(p == nullptr)
        {
            pthread_mutex_init(&mutex, nullptr);
            pthread_mutex_lock(&mutex);
            if(p == nullptr)
                p = new singleton();
            pthread_mutex_unlock(&mutex);
        }
        return p;
    }
};
singleton * singleton::p= nullptr;

class singleton2     //懒汉 内部静态变量
{
private:
    singleton2(){}
public:
    static pthread_mutex_t mutex;
    static singleton2 * instance()
    {
        pthread_mutex_init(&mutex, nullptr);
        pthread_mutex_lock(&mutex);
        static singleton2 obj;
        pthread_mutex_unlock(&mutex);
        return &obj;
    }
};


class singleton3     //饿汉
{
private:
    singleton3(){}
    static singleton3 *p;
public:
    static singleton3 * instance()
    {
        return p;
    }
};
singleton3* singleton3::p = new singleton3;


class singleton4     //懒汉 内部静态变量 c++11后静态局部变量线程安全 不需要加锁
{
private:
    singleton4(){}
public:
    static singleton4 * instance()
    {
        static singleton4 obj;
        return &obj;
    }
};










