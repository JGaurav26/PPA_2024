#include<iostream>
using namespace std;

class Thali
{
    public:
        int gulabjamun;
        int rasgulla;
        static int loncha;

// parameterized constructor with default arguments
        Thali(int jam = 10, int ras = 5)
        {
            gulabjamun = jam;
            rasgulla = ras;
        }

        void display()
        {
            cout<<"Gulabjamun = "<<gulabjamun<<endl;
            cout<<"Rasgulla = "<<rasgulla<<endl;
            cout<<"------------------------"<<endl;
        }
};

int Thali :: loncha = 111;

int main()
{

    cout<<"value of loncha:- "<<Thali::loncha<<endl;

    Thali thali1;
    thali1.display();
    cout<<"size of any object:- "<<sizeof(Thali)<<endl;

    Thali thali2(25);
    thali2.display();

    Thali thali3(25,25);
    thali3.display();

    return 0;

}