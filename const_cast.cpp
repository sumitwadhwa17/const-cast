// const_cast.cpp : This file contains the 'main' function. Program execution begins and ends there.
//const_cast it si type of RTTI or type of cast which is used to cast away the  constness of variable
// const cast is used to change the constant valur of any object or it is used to remove the constant nature of an obkect
//case 1: const cast is used to change the nonconst class member inside the const function
//case 2: it is undefined behaviout to modify the value which is intially declared as of const
//case 3: const cast is used to cast away the volatile attribute.
//const cast i.e destination or convertible type is on pointer or refernce tyep must be

#include <iostream>
using namespace std;
int main()
{
    const int a = 10; 
    const int *b = &a;
    int *d1 = const_cast<int*>(b);
    *d1 = 17;
    cout << " value of a " << a << endl;
    cout << " value of d1 is" << *d1 << endl;
    //it is not a compile time error but in run time unpredticable behaviour because
    // there are not variable are stored in same address this cast type is wrong 
    //so new approach
      //case2

    int a1 = 20; //nonconst variable
    const int *b1 = &a1;
    int *d2 = const_cast<int*>(b1);
    *d2 = 40;
    cout << "value of a1 is" << a1 << endl;
    cout << "value of d2 is" << *d2 << endl;
    std::cout << "Hello World!\n";

    //case 3
    int x = 40;
    const int* y = &x;
    char* c1 = (char*)(y);
    *c1 = 'A';
    cout<<"value of c1 is"<<*c1<<endl;
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
