#include <iostream>

//Call func std::cout
void print()
{
    //wanna use standart dll for print
    std::cout << "Hello Skillbox!\n";
  
}
/*
1 set some int's
2 HELLO WORLD!
*/

int sum(int a, int b, int c)
{
    return(a + b+ c);
}

int printint(int toprint)
{
    std::cout << toprint << "\n";
    return toprint;
}

int main()
{
    int x = 10, y = 12;
    long long summa = sum(x, y, x);
    return 0;

}
