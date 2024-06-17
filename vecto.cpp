#define _ВклРусс setlocale(LC_ALL, "ru")
#include <Vector>
#include <iostream>
using namespace std;

int mountnum(int mount, int years)
{
    int day = 0;
    if (mount >= 1)
    {
        day = day + 31;
    }
    if (mount >= 2)
    {
        if (years % 4 == 0)
        {
            day = day + 29;
        }
        else
        {
            day =  day + 28;
        }
        
    }
    if (mount >= 3)
    {
        day = day + 31;
    }
    if (mount >= 4)
    {
        day = day + 30;
    }
    if (mount >= 5)
    {
        day = day + 31;
    }
    if (mount >= 6)
    {
        day = day + 30;
    }
    if (mount >= 7)
    {
        day = day + 31;
    }
    if (mount >= 8)
    {
        day = day + 31;
    }
    if (mount >= 9)
    {
        day = day + 30;
    }
    if (mount >= 10)
    {
        day = day + 31;
    }
    if (mount >= 11)
    {
        day = day + 30;
    }
    if (mount >= 12)
    {
        day = day + 31;
    }
    return day;
}
int Ves(int years)
{
    int day = 0;
    for (int i = 0; i < years; i++)
    {
        if (years % 4 == 0 || years % 100 == 0)
        {
            day + 1;
        }
    }
    return day;
}
int funsOne(int day, int month, int years, int day2, int month2, int years2)
{
    int one;
    int two;

    one = day + mountnum(month, years) + (365 * years) + Ves(years);
    two = day2 + mountnum(month2, years2) + (365 * years2) + Ves(years2);
    return one - two;

}
double funsTwo(double massive[],int size)
{
    double sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + massive[i];
    }
    return sum / size;
}
void funsThree(double massive[], int size)
{
   int null = 0;
   int otr = 0;
   int poll = 0;
        for (int i = 0; i < size; i++)
        {
            if (massive[i] == 0 )
            {
                null = null + 1;
            }
            else if(massive[i] >= 1)
            {
                poll = poll + 1;
            }
            else
            {
                otr = otr + 1;
            }
        }
        cout << "Отрц:" << otr << " Положительный:" << poll << " С нуллем: " << null;
}
int main()
{
    _ВклРусс;
    cout << funsOne(5, 2, 2024, 3, 1, 2024) << "\n";
    int const size = 5;
    double massive[size]{4,3,2,1,1};
    cout << funsTwo(massive, size);
    cout << "\n";
    funsThree(massive, size);
}
