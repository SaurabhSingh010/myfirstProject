#include<iostream>
#include<bitset>
using namespace std;

int main()
{
    int num = 0b10001010;
    int k =3;
    num= num | (1<<4);
    num= num & ~(1<<3);
    num = num ^(1<<0);
    cout<< bitset<8>(num);
}

