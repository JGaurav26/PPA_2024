#include<iostream>
using namespace std;

class Thali
{
    public:
        int gulabjamun;
        int rasgulla;

        Thali(int jam = 10, int ras = 5)
        {
            gulabjamun = jam;
            rasgulla = ras;
        }

    /*
        Thali(){}
    */
        void display()
        {
            cout<<"Gulabjamun = "<<gulabjamun<<endl;
            cout<<"Rasgulla = "<<rasgulla<<endl;
            cout<<"------------------------"<<endl;
        }
};

int main()
{
    Thali thali1;
    thali1.display();

    Thali thali2(25);
    thali2.display();

    Thali thali3(25,25);
    thali3.display();

    return 0;

}