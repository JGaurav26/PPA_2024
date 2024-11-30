#include<iostream>>
using namespace std;

class Demo
{
    public:
            int i,j,k;


    Demo(int a, int b, int c)
    {
            void fun(i++; j++; k++)
            {
                i++,j++,k++;
            }

            void gun( int x, const int y) const
            {
                int no1 = 10;
                const int no2 = 20;
                x++;
                y++;
                no1++;
                no2++;
                i++;
                j++;
                k++;
            }
    }
};


int main()
{
    Demo obj(10,20,30);
    obj.fun();
    obj.gun(40,50);

    const Demo obj2(100,200,300);
    obj2.fun();
    obj2.gun(60,70);
}