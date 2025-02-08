#include<iostream>
using namespace std;

template<class T>

T Addition(T no1, T no2)
{
    T ans;
    ans = no1 + no2;
    return ans;
}
int main()
{
    int iRet = 0;
    float fRet = 0.0f;
    double dRet = 0.0;

    iRet = Addition(10,20);
    fRet = Addition(30.0f,40.0f);
    dRet = Addition(50.0,60.0);

    cout<<iRet<<endl;
    cout<<fRet<<endl;
    cout<<dRet<<endl;
}