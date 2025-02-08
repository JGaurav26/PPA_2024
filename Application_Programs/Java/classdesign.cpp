#include<iostream>
using namespace std;

class Array{
    private:
        int *Arr;
        int iLength;

    public:
        Array(int size)
        {
            iLength = size;
            Arr = new int[iLength];
        }

    ~Array()
    {
        delete []Arr;
    }

    void accept()
    {
        int iCnt = 0;
        cout<<"Enter the array elements :: "<<endl;

        for(iCnt; iCnt<iLength; iCnt++)
        {
            cin>>Arr[iCnt];
        }
    }

    void display()
    {
        int iCnt = 0;

        for(iCnt; iCnt<iLength; iCnt++)
        {
            cout<<Arr[iCnt]<<"\t";
        }
        cout<<endl;
    }
};

int main()
{
    Array aobj(5);
    aobj.accept();
    aobj.display();

    return 0;
}