#include<iostream>
#include<thread>
#include<future>

using namespace std;
void fun(promise<int> &&prom , int num)
{
    cout<<"thread call"<<endl;
    num++;
    prom.set_value(num);
}
int main()
{
    promise<int>prom;
    future<int>fur= prom.get_future();
    thread thr(fun,move(prom),5);
    int result = fur.get();
    cout<<"return"<< result;

    thr.join();

}