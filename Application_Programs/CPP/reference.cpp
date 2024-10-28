#include<iostream>
using namespace std;

int main()
{
    int no = 11;
    int &noref = no;

    int rahul = 99;
    int &pappu = rahul;

    int *ptr = &no;
    int *(&pterRef) = ptr;

    cout<<"no::"<<no<<"\n" ; // 11
    cout<<"noref::"<<noref<<"\n" ; // 11


    cout<<"no::"<<&no<<"\n" ; // 
    cout<<"noref::"<<&noref<<"\n" ; // 

    cout<<"*ptr::"<<*ptr<<"\n" ;
    cout<<"*pterref::"<<*pterRef<<"\n" ;

    no++;
    cout<<"no::"<<no<<"\n" ; // 12
    cout<<"noref::"<<noref<<"\n" ; // 12

    noref++;
    cout<<"no::"<<no<<"\n" ; // 12
    cout<<"noref::"<<noref<<"\n" ; // 12


    return 0;
}