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


    int a = 15;
    int *p = &a;
    int b = *p;
    bool tf = b == a;
    bool ft = 1 == 2;
    cout << endl << ft << endl; // 0 means false
    cout << a << " = " << b << " " << tf << endl; //1 means true

    return 0;
}



// https://stackoverflow.com/a/5484723/
// https://stackoverflow.com/a/14224977/