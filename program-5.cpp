#include<iostream>
using namespace std;

int main()
{
    int array[5];

    for(int i=0; i < 5; i++)
    {
        cout << "Enter The Value Of Element["<<i<<"] : ";
        cin >> array[i];
    }
    cout << endl << "-----------------------" << endl;
    for(int i=0; i<5; i++)
    {
        cout << "The Value Of Element["<<i<<"] Is " << array[i] << endl;
    }

    int index,element;

    cout << "Enter A Index To Update : ";
    cin >> index;

    cout << "Enter A Element To Exchange : ";
    cin >> element;

    array[index] = element;

    cout << endl << "-----------------------------------" << endl;

    for (int i=0; i<5; i++)
    {
        cout << "The Value Of Element ["<<i<<"] Is " << array[i] << endl;
    }
    return 0;
}