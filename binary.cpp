#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<"AND"<< (a & b) ;
    cout<<endl;
    cout<< "OR"<<(a || b );
    cout<<endl;
    cout<< "XOR"<<(a^b) ;
    cout<<endl;
    cout<< ~a << " "<< ~b;
    int num=1;
    int leftshift = num << 3;
    int rightshift = a >> 2;

    cout<< "leftshift" <<leftshift <<" " <<"RightShift" << rightshift << endl;

    int num1= 010100;
    int k =3;
    cout<< (num1 | (1 << (k)));




}