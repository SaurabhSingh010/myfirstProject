#include<iostream>
#include<string>
#include<bitset>
using namespace std;
int main()
{
    // int a,b;
    // cin>>a>>b;
    // cout<<"AND"<< (a & b) ;
    // cout<<endl;
    // cout<< "OR"<<(a || b );
    // cout<<endl;
    // cout<< "XOR"<<(a^b) ;
    // cout<<endl;
    // cout<< ~a << " "<< ~b;
    // int num=1;
    // int leftshift = num << 3;
    // int rightshift = a >> 2;

    // cout<< "leftshift" <<leftshift <<" " <<"RightShift" << rightshift << endl;
   
      int num = 0b10010101;

      int lshft;
      int rshft;

      lshft = num <<3;
      rshft = num >> 4;
      cout<< bitset<8>(lshft)<< endl;
      cout<< bitset<8>(rshft)<<endl;

    




}