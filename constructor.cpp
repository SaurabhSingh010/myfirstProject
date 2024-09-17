#include <iostream>
using namespace std;
class cons{
    public:
    cons()
    {
        cout<<"default construtor";
    }
    cons(int num)
    {
        cout<< num<<"parameter construction";
    }
    cons(const cons &obj)
    {
        cout<< "copy construction";
    }
    //void operator =()

};

int main()
{
    cons obj;

}