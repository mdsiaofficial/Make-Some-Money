#include <iostream>

using namespace std;

/*


     Md Shoriful Islam Ashique
        Founder & CEO AssopInc.


*/


int main()
{
    float money, interest;
    int years;
    cout << "Enter how much money you'd like to invest";
    cin >> money;
    if (money <= 0)
    {
       cout << "You cannot invest zero or less than zero money!";
       return 1;
    }
    cout << "Enter interest rate (%): ";
    cin >> interest;
    interest = 1 + (interest / 100);
    cout << "Enter number of years to invest for: ";
    cin >> years;
    if (years <= 0)
    {
        cout << "You cannot invest for zero or less than zero years!";
        return 1; 
    }
    for (int i = 1; i <= years; i++)
    {
       money *= interest;
       cout << "\nYear " << i << ":    " << money;
    }
}
