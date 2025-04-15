#include<iostream>
using namespace std;

int main()
{
    int array[8];

    for (int i=0; i<9; i++)
    {
        cout << "Enter The Value Of Element["<<i<<"] : ";
        cin >> array[i];        
    }
    cout << endl << "------------------------" << endl;
    for (int i = 0; i < 9; i++)
    {
        cout << "The Value Of Element["<<i<<"] : " << array[i] << endl;
    }
    

    return 0;
}