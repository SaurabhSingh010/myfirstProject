#include<iostream>
#include<vector>
#include<string.h>
#include<algorithm>
using namespace std;

//*********************************** Single Design pattren*************************** */
// class singletone
// {
//     private:
//     singletone()
//     {
//         cout<<"private constructor"<<endl;
//     }
//     static singletone *instance;
//     public:
//     static singletone *getinstance()
//     {
//         if(instance == NULL)
//         {
//             instance = new singletone();
//         }
//         return instance;
//     }
//     singletone (const singletone &)= delete;
//     singletone &operator = (const singletone &) = delete;
// };
// singletone *singletone::instance = NULL;
// int main()
// {
//     singletone *obj = singletone::getinstance();
//     singletone *obj1 = singletone::getinstance();
//     if(obj == obj)
//     {
//         cout<<"both object is point too the same object";
//     }
// }


// Observer design pattren

class observer{
    public:
    virtual void update(int value)=0;
};

class concreatobserver : public observer{
    int observerstate;
    public:
    void update(int value)
    {
       observerstate = value;
       cout<< "observerstate"<<" "<< observerstate <<endl;
    }
};
class subject{
    public:
    virtual void attachobserver(observer *obs)=0;
    virtual void notify()=0;
    virtual void removeobserver(observer *obs)=0;

};
class concreatesubject : public subject
{
    vector<observer*>vtr;
    int statechange=0;
    public:
    void attachobserver(observer *obs)
    {
        vtr.push_back(obs);
    }
    void setvalue(int value)
    {
        statechange = value;
        notify();
    }
    void notify()
    {
        for(observer *obs : vtr)
        {
            obs->update(statechange);
        }
    }
    void removeobserver (observer *obs)
    {
        auto it = std::remove(vtr.begin(), vtr.end(), obs); // Move the observer to the end
        vtr.erase(it, vtr.end());
    }
};

int main()
{
    concreatesubject  sub;
    concreatobserver obj1,obj2,obj3;

    sub.attachobserver(&obj1);
    sub.attachobserver(&obj2);
    sub.attachobserver(&obj3);

    sub.setvalue(10);
    sub.removeobserver(&obj1);

    cout<<"changing the state";

    sub.setvalue(20);


}