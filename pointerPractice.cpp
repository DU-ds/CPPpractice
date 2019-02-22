#include <iostream>
const int len = 5;

int main()
{
    using namespace std;

    int num[len] = {0,100,200,300,400};

    const int *pNum = num;

    for (int i = 0; i < len; i++)
    {
        cout <<  i << "\t" << *(pNum + i) << endl;
    }
    
    cout << endl;
    int *pNum2 = 0;
    pNum2 = num;

    for (int i = 0; i < len + 10; i++)
    {
        cout <<  i << "\t" << *(pNum2 + i) << endl;
    }

    cout << endl;

    for (int i = 0; i < len; i++)
    {
        cout <<  i << "\t" << num[i] << endl;
    }

    return 0;
}



