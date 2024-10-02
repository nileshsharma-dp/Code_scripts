#include <iostream>
#include <string>
using namespace std;

int add(int a, int b)
{
    int c = a + b;
    return c;
}

class Employee
{
public:
    string name;
    int salary;

    Employee(string n, int s, int sp)
    {
        this->name = n;
        this->salary = s;
        this->secretpassword = sp;
    }

    void printdetails()
    {
        cout << " The name of our first employee is " << this->name << " and salary is " << this->salary << " Dollers" << endl;
    }

    void getsecretpassword()
    {
        cout << " The secret password of employee is "<< this->secretpassword;
    }

private:
    int secretpassword;
};


class Programmer : public Employee
{
    public:
      int errors;
};



int main()
{
    // cout<<"Helle Everyone!"<<endl;
    // cout<<"Next Line";
    /*int a, b, c;
    short sa=9;
    cout<<sa;*/

    // camelcase Notation
    // short a;
    // int b;
    // int const b = 83;
    // long c;
    // long long d;
    // float score = 45.54;
    // double score1 = 45.547;
    // long double score3 = 45.5437;
    // score = 34.5;
    // float const score =45.63;

    // cout<<"The Score is "<<score<<endl;
    // cout<<b;

    /*int marKsInMaths = 67;
    cout<<marKsInMaths;*/

    // int a, b;
    // cout<<"Enter First Number: "<<endl;
    // cin>>a;
    // cout<<"Enter Second Number: "<<endl;
    // cin>>b;

    // cout<<"The Sum of Number is: "<< a + b<<endl;
    // cout<<"The Diffrence of Number is: "<< a - b<<endl;
    // cout<<"The Multiplication of Number is: "<< a * b<<endl;
    // cout<<"The Division of Number is: "<< (float)a / b<<endl;

    // int age;
    // cout << "Enter You age" << endl;
    // cin >> age;

    // if (age > 100 || age < 1){
    //     cout<<"Invalid Age";
    // }
    // else if (age>= 18){
    //     cout<<"Hurray! You are elegible to Vote.";
    // }else{
    //     cout<<"Sorry!,You are not elegible to Vote.";
    // }

    // switch (age)    //in side snipint automatically comes
    // {
    // case 12:
    //     cout << "You are 12 Years Old";
    //     break;
    // case 14:
    //     cout << "You are 14 Years Old";
    //     break;
    // case 18:
    //     cout << "You are 18 Years old";
    //     break;

    //         default : cout
    //          << "You are Neither 12 nor 14 and 18 Years Old";
    // }

    // int i = 0;
    // while (i < 11)
    // {
    //     cout<<"Index No.: "<< i << endl;
    //     i = i+1;
    // }

    // int i = 0;
    // do
    // {
    //     cout << "Index No.: " << i << endl;
    //     i = i + 1;
    // }
    // while (i < 14);

    // for (int i = 0; i < 15; i++)
    // {
    //     cout<<"The value of Index is: "<< i <<endl;
    // }

    // int i, j;
    // for (i=2; i<= 4; i++)
    // {
    //     for ( j=2; i<=6; i++)
    //     {
    //         cout << j;
    //     }
    //     cout <<endl;
    // }

    // int a, b;
    // cout<<"Enter First Number: "<<endl;
    // cin>>a;
    // cout<<"Enter Second Number: "<<endl;
    // cin>>b;
    // cout<<"The function return: " <<add(a,b);

    // int arr[] = {555,444,333,222,111};
    // cout<<arr[4];

    // int marks[6];

    // for (int i = 0; i < 6; i++)
    // {
    //     cout<<"Enter the marks of " << i << "th Student" << endl;
    //     cin>> marks[i];
    // }

    // for (int i = 0; i < 6; i++)
    // {
    //     cout << "Marks of " << i << "th Student is " << marks[i] << endl;
    // }

    // int arr2d[2][5] = {
    //     {1, 2, 3, 4, 5},
    //     {6, 7, 8, 9, 10}};

    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 5; j++)
    //     {
    //         cout << "The Value at " << i << ", " << j << " is " << arr2d[i][j] << endl;
    //     }
    // }

    // string name = "Nilesh";
    // cout<< " My name is "<<name<<endl;
    // cout<< " My name length is "<<name.length()<<endl;
    // cout<< " My name substring is "<<name.substr(0,3)<<endl;
    // cout<< " My name is "<<name.size()<<endl;
    // cout<< " My name is "<<name.at(0)<<endl;
    // cout<< " My name is "<<name.insert(6," Sharma")<<endl;

    // int a =34;
    // int* ptra;
    // ptra = &a;
    // cout<<"The Value of a is "<< a << endl;
    // cout<<"The Value of a is "<< *ptra << endl;
    // cout<<"The Address of a is "<< ptra << endl;
    // cout<<"The Address of a is "<< &a << endl;

    // float b = 34.3434;
    // float* ptra;
    // ptra = &b;
    // cout<<"The Value of b is "<< b << endl;
    // cout<<"The Value of b is "<< *ptra << endl;
    // cout<<"The Address of b is "<< ptra << endl;
    // cout<<"The Address of b is "<< &b << endl;

    // string c = "Tango";
    // string* ptra;
    // ptra = &c;
    // cout<<"The Char in c is "<< c << endl;
    // cout<<"The Char in c is "<< *ptra << endl;
    // cout<<"The Address of c is "<< ptra << endl;
    // cout<<"The Address of c is "<< &c << endl;

    Employee nil("Nilesh_Cunstructor", 505050, 123456789);
    // nil.name ="Nilesh Sharma";
    // nil.salary = 50000;

    // cout << " The name of our first employee is "<< nil.name << " and salary is "<< nil.salary << " Dollers" << endl;
    nil.printdetails();
    nil.getsecretpassword();

    return 0;
}
