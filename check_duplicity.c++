#include <iostream>
#define SIZE 20
using namespace std;
void checkIfExits(int b[], int index)
{
    int i, j, flag = 0;
    for (i = 0; i < index; i++)
    {
        if (b[index] == b[i])
        {
            return;
        }
    }
    cout << b[index] << " ";
}
int main()
{
    int i;
    int numArray[SIZE] = {0};
    cout << "Enter " << SIZE << " numbers : ";
    for (i = 0; i < SIZE; i++)
    {
        cin >> numArray[i];
    }
    for (i = 0; i < SIZE; i++)
    {
        if (numArray[i] >= 10 && numArray[i] <= 100)
        {
            cout << "You input : \n";
            for (i = 0; i < SIZE; i++)
            {
                cout << numArray[i] << " ";
            }
            cout << "\n";
            cout << "The nonduplicate values are : \n";
            cout << numArray[0] << " ";
            for (i = 1; i < SIZE; i++)
            {
                checkIfExits(numArray, i);
            }
        }
        else
        {
            cout << "\n\n Please input in range between 10 to 100 only ";
            break;
        }
    }
    return 0;
}
