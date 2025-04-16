#include<iostream>
using namespace std;

int main()
{
    int array[10];

    int i,size,index,insert,choice,element;

    cout << endl <<"------ Welcome ------" << endl;

    do
    {
        cout << "--------------------";
        cout << endl << "Enter 1 to Insert" << endl;
        cout << "Enter 2 To Delete" << endl;
        cout << "Enter 3 To Update" << endl;
        cout << "Enter 4 To View" << endl;
        cout << "Enter 0 To Exit" << endl;
        cout << "Enter Your Choice : ";
        cin >> choice;
        cout << endl;

    if (choice ==1)
    {
        switch (choice)
    {
    case 1:
        cout << "Enter The Size Of Array : ";
        cin >> size;
        for (int i = 0; i < size; i++)
        {
            cout << "Enter The Value Of " << i << " : ";
            cin >> array[i];
        }
        break;
    case 2:
        cout << "Enter The Index To Delete : ";
        cin >> index;
        for (i=index; i<size; i++)
        {
            array[i] = array[i+1];
        }
        size--;
        break;
    case 3:
        cout << "Enter A Index To Update : ";
        cin >> index;
        cout << "Enter A New Element : ";
        cin >> element;
        array[index] = element;
        break;
    case 4:
        cout << endl << "--------------------" << endl << "The Array Is : " << endl;
        for (i = 0; i < size; i++)
        {
            cout << array[i] << " ";
        }
        cout << endl << "--------------------";
        break;
    case 0:
        break;
    default:
        cout << "Wrong Input" << endl;
        break;
    }
    }

    } while (choice != 0);
    
    
    return 0;
}