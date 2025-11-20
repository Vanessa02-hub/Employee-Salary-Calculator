#include <iostream>

using namespace std;
double salary;
int days;
string name;
double bonus = 0;
double finalsalary;
void capture()
{
    cout<<"Enter employee name:";
        cin>>name;
    cout<<"Enter your monthly salary: ";
    cin>>salary;
    cout<<"Enter number of days worked: ";
    cin>>days;


if (days >= 300)
{
    cout<<"You have a 10% bonus"<<endl;
    salary = salary * 12;
cout<<"Annual salary (before bonus): "<<salary<<endl;
bonus = salary * 0.10;
cout<<"Your bonus is: "<<bonus<<endl;
finalsalary = salary + bonus;
cout<<"Final salary: "<<finalsalary<<endl;
}
else if(days >=250 && days < 300)
{
    cout<<"You have a 5% bonus"<<endl;
    salary = salary * 12;
cout<<"Annual salary (before bonus): "<<salary<<endl;
bonus = salary * 0.05;
cout<<"Your bonus is: "<<bonus<<endl;
finalsalary = salary + bonus;
cout<<"Final salary: "<<finalsalary<<endl;
}
else if(days >=200 && days <250)
{
    cout<<"You have a 2% bonus"<<endl;
    salary = salary * 12;
cout<<"Annual salary (before bonus): "<<salary<<endl;
bonus = salary * 0.002;
cout<<"Your bonus is: "<<bonus<<endl;
finalsalary = salary + bonus;
cout<<"Final salary: "<<finalsalary<<endl;
}
else if(days < 200)
{
    cout<<"You have a 0% bonus"<<endl;
    salary = salary * 12;
cout<<"Annual salary (before bonus): "<<salary<<endl;
bonus = salary * 0.00;
cout<<"Your bonus is: "<<bonus<<endl;
finalsalary = salary + bonus;
cout<<"Final salary: "<<finalsalary<<endl;
}
}
int main()
{
   capture();
    return 0;
}
