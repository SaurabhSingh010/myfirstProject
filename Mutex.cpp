#include<iostream>
#include<mutex>
#include<thread>
using namespace std;
//mutex mtx;
int counter=0;
void increment(int id,int a ,int b)
{
   mtx.lock();
    cout<<id<< " "<<a+b<<endl;
    sleep(30);
     counter++;
   mtx.unlock();
}
int main()
{
    thread t1(increment,1,2,3);
    thread t2(increment,2,8,7);
    t1.join();
    t2.join();
    cout<<endl;
    cout<<counter;
}