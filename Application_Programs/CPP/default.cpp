#include<iostream>
using namespace std;

float calculate(float marks, float outof)
{
    float percentage = (marks/outof)*100;
    return percentage;
}

int main()
{
    float Ans = 0.0f;
    Ans = calculate(86,100);
    cout<<"percentages(%) = "<<Ans<<endl;

    return 0;
}