#include<iostream>
using namespace std;

class singletone
{
    private:
    singletone()
    {
        cout<<"private constructor"<<endl;
    }
    static singletone *instance;
    public:
    static singletone *getinstance()
    {
        if(instance == NULL)
        {
            instance = new singletone();
        }
        return instance;
    }
    singletone (const singletone &)= delete;
    singletone &operator = (const singletone &) = delete;
};
singletone *singletone::instance = NULL;
int main()
{
    singletone *obj = singletone::getinstance();
    singletone *obj1 = singletone::getinstance();
    if(obj == obj)
    {
        cout<<"both object is point too the same object";
    }
}