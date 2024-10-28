#include <iostream>
using namespace std;

class Arithmetic
{
    public:
        int Addition(int no1, int no2)
        {
            return no1 + no2;    
        }

        int Addition(int no1, int no2, int no3)
        {
            return no1 + no2 + no3;    
        }

        float Addition(float no1, float no2)
        {
            return no1 + no2;    
        }
};

int main()
{
    Arithmetic obj1; // Default constructor invoked internally.
    
    int ans = obj1.Addition(10, 20);
    cout << "10 + 20 = " << ans << "\n";

    ans = obj1.Addition(10, 20); // Update the value of ans
    cout << "10 + 20 = " << ans << "\n";

    ans = obj1.Addition(10, 20, 30); // Update the value of ans
    cout << "10 + 20 + 30 = " << ans << "\n";

    float ansFloat = obj1.Addition(10.5f, 20.5f); // Use a separate variable for float
    cout << "10.5f + 20.5f = " << ansFloat << "\n"; // Print the correct result

    return 0;
}
