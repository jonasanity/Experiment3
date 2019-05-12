#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;
const int CITY = 3;
const int WEEK = 7;
int main()
{
    int temperature[CITY][WEEK];

    cout << "Enter all temperature for a week of first city,second city and third city. \n";

    for (int i = 0; i < CITY; ++i)
    {
        for(int j = 0; j < WEEK; ++j)
        {
            cout << "City " << i + 1 << ", Day " << j + 1 << " : ";
            cin >> temperature[i][j];
        }
    }

cout << "\n\nDisplaying Values:\n";

    for (int i = 0; i < CITY; ++i)
    {
        for(int j = 0; j < WEEK; ++j)
        {
            cout << "City " << i + 1 << ", Day " << j + 1 << " = " << temperature[i][j] << endl;
        }
    }
getch();
return 0;
}
